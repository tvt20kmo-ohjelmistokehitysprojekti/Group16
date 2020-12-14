<?php
/**
 *
 */
class Saldo_model extends CI_model
{
    
  function get_Saldo($id)
  {
    $this->db->select('*');
    $this->db->from('saldo');
    if($id !== NULL) {
      $this->db->where('idAccount',$id);
    }
    return $this->db->get()->result_array();
  }

}
