<?php
/**
 *
 */
class Card_model extends CI_model
{
  
  
  function add_Card($add_data){
    $this->db->insert('Card',$add_data);
    if($this->db->affected_rows()!==NULL){
      return TRUE; 
    }
    else {
      return FALSE;
    }  
  }
  

  

  function check_login($idCard){
    $this->db->select('password');
    $this->db->from('Card');
    $this->db->where('idCard',$idCard);
    return $this->db->get()->row('password');
  }

}