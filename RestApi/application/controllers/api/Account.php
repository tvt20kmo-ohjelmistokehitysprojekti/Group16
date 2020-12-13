<?php

defined('BASEPATH') OR exit('No direct script access allowed');

// This can be removed if you use __autoload() in config.php OR use Modular Extensions
/** @noinspection PhpIncludeInspection */
require APPPATH . 'libraries/REST_Controller.php';

/**
 * This is an example of a RestApi based on PHP and CodeIgniter 3.
 * 
 *
 * @package         CodeIgniter
 * @subpackage      Rest Server
 * @category        Controller
 * @CreditLimit          Pekka Alaluukas (edited the version made by Phil Sturgeon & Chris Kacerguis)
 * @license         MIT
 * @link            https://github.com/chriskacerguis/codeigniter-restserver
 **/
class Account extends REST_Controller {

    function __construct()
    {
        //enable cors
        header('Access-Control-Allow-Origin: *');
        header("Access-Control-Allow-Methods: GET, POST, OPTIONS, PUT, DELETE");
        // Construct the parent class
        parent::__construct();

        $this->load->model('Account_model');
    }

   function Saldo_get()  
    {
        $idAccount = $this->post('idAccount');

        $message=$this->Account_model->Saldo($idAccount);  
        if(!$message){
            $this->response([
                'status' => FALSE,
                'message' => 'Bad Reguest'
                ], REST_Controller::HTTP_BAD_REQUEST);
        }
        else{
            $this->response($message, REST_Controller::HTTP_OK);
        }    
	}
function otto_post()

{
    $id = $this->input->post('id');
    $sum = $this->input->post('sum');
    $test=$this->Account_model->otto($id,$sum);
    if($test){
        echo json_encode(true);
    }
    else echo json_encode(false);
    
}
function siirto_post()

{
    $id = $this->input->post('id');
    $id2 = $this->input->post('id2');
    $sum = $this->input->post('sum');
    $test=$this->Account_model->siirto($id,$id2,$sum);
    if($test){
        echo json_encode(true);
    }
    else echo json_encode(false);
    
}

function tapahtumat_get()
    {
        // Account from a data store e.g. database  

        $id = $this->input->post('id');

        

      
            // Validate the id.
            if ($id <= 0)
            {
                // Invalid id, set the response and exit.
                $this->response(NULL, REST_Controller::HTTP_BAD_REQUEST); // BAD_REQUEST (400) being the HTTP response code
            }

            // Get the Account from the database, using the id as key for retrieval.
            $Account=$this->Account_model->tapahtumat($id);
            if (!empty($Account))
            {
                $this->set_response($Account, REST_Controller::HTTP_OK); // OK (200) being the HTTP response code
            }
            else
            {
                $this->set_response([
                    'status' => FALSE,
                    'message' => 'Account could not be found'
                ], REST_Controller::HTTP_NOT_FOUND); // NOT_FOUND (404) being the HTTP response code
            }
        

    }

   function index_get()
    {
        // Account from a data store e.g. database  

        $id = $this->input->get('id');

        // If the id parameter doesn't exist return all Accounts
        if ($id === NULL)
        {
            $Account=$this->Account_model->get_Account(NULL);
            // Check if the Account data store contains Account (in case the database result returns NULL)
            if ($Account)
            {
                // Set the response and exit
                $this->response($Account, REST_Controller::HTTP_OK); // OK (200) being the HTTP response code
            }
            else
            {
                // Set the response and exit
                $this->response([
                    'status' => FALSE,
                    'message' => 'No Account were found'
                ], REST_Controller::HTTP_NOT_FOUND); // NOT_FOUND (404) being the HTTP response code
            }
        }

         // Find and return a single record for a particular Account.
        else {
            // Validate the id.
            if ($id <= 0)
            {
                // Invalid id, set the response and exit.
                $this->response(NULL, REST_Controller::HTTP_BAD_REQUEST); // BAD_REQUEST (400) being the HTTP response code
            }

            // Get the Account from the database, using the id as key for retrieval.
            $Account=$this->Account_model->get_Account($id);
            if (!empty($Account))
            {
                $this->set_response($Account, REST_Controller::HTTP_OK); // OK (200) being the HTTP response code
            }
            else
            {
                $this->set_response([
                    'status' => FALSE,
                    'message' => 'Account could not be found'
                ], REST_Controller::HTTP_NOT_FOUND); // NOT_FOUND (404) being the HTTP response code
            }
        }

    }

   function index_post()
    {
        // Add a new Account
        $add_data=array(
          'idAccount'=>$this->post('idAccount'),
          'Type'=>$this->post('Type'),
          'CreditLimit'=>$this->post('CreditLimit'),
          'Balance'=>$this->post('Balance')
        );
        $test=$this->Account_model->add_Account($add_data);
        if($test)
        {
            $message = [
                'id_Account' => $this->post('idAccount'),
                'Type' => $this->post('Type'),
                'CreditLimit' => $this->post('CreditLimit'),
                'Balance'=>$this->post('Balance'),
                'message' => 'Added a resource'
            ];
            $this->set_response($message, REST_Controller::HTTP_CREATED); // CREATED (201) being the HTTP response code
        }
        else
        {
            // Set the response and exit
            $this->response([
                'status' => FALSE,
                'message' => 'Can not add data'
            ], REST_Controller::HTTP_CONFLICT); // CAN NOT CREATE (409) being the HTTP response code
        }

    }
    function index_put()
    {
        // Update the Account
        $id = $this->input->get('id');
        $update_data=array(
          'Type'=>$this->put('Type'),
          'CreditLimit'=>$this->put('CreditLimit'),
          'Balance'=>$this->put('Balance')
        );
        $result=$this->Account_model->update_Account($id, $update_data);

        if($result)
        {
            $message = [
                'id_Account' => $id,
                'Type' => $this->put('Type'),
                'CreditLimit'=>$this->put('CreditLimit'),
                'Balance'=>$this->put('Balance'),
                'message' => 'Updates a resource'
            ];

            $this->set_response($message, REST_Controller::HTTP_CREATED); // CREATED (201) being the HTTP response code
        }
        else 
        {
            // Set the response and exit
            $this->response([
                'status' => FALSE,
                'message' => 'Can not update data'
            ], REST_Controller::HTTP_CONFLICT); // CAN NOT CREATE (409) being the HTTP response code
        }
    }

   function index_delete()
    {
        $id = $this->input->get('id');

        // Validate the id.
        if ($id <= 0)
        {
            // Set the response and exit
            $this->response(NULL, REST_Controller::HTTP_BAD_REQUEST); // BAD_REQUEST (400) being the HTTP response code
        }
        $result=$this->Account_model->delete_Account($id);
        if ($result)
        {
          $message = [
              'id_Account' => $id,
              'message' => 'Deleted the resource'
          ];
          $this->set_response($message, REST_Controller::HTTP_OK);
        }
        else
        {
            // Set the response and exit
            $this->response([
                'status' => FALSE,
                'message' => 'Can not delete data'
            ], REST_Controller::HTTP_CONFLICT); // CAN NOT CREATE (409) being the HTTP response code
        }
    }



}
