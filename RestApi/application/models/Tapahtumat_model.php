<?php
/**
 *
 */
class Tapahtumat_model extends CI_model
{
    
  function get_Tapahtumat($id)
  {
    $this->db->select('*');
    $this->db->from('tapahtumat');
    if($id !== NULL) {
      $this->db->where('idAccount',$id);
    }
    return $this->db->get()->result_array();
  }
  function get_tapahtuma($id)
	{
      $call="call tapahtumat(?)";
      $data=array('id'=>$id);
      
      if($id!==NULL){
        $this->db->query($call,$data);
        }
        else {
          return $this->db->get()->result_array();
        }  
	}

}
