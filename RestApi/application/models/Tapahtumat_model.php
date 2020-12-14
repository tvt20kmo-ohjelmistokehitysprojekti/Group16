<?php
/**
 *
 */
class Tapahtumat_model extends CI_model
{
    
  function get_Tapahtumat($id)
  {
    $this->db->limit(5,1);
    $this->db->select('*');
    $this->db->from('Happenings');
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
