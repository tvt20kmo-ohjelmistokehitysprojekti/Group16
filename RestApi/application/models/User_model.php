<?php
/**
 *
 */
class User_model extends CI_model
{
  function get_user($id){
    $this->db->select('*');
    $this->db->from('Card');
    if($id !== NULL) {
      $this->db->where('idCard',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_user($add_data){
    $this->db->insert('user',$add_data);
    if($this->db->insert_id()!==NULL){
      return $this->db->insert_id();
    }
    else {
      return FALSE;
    }
  }
  function update_user($id, $update_data){
    $this->db->where('id_user',$id);
    $this->db->update('user',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

  function delete_user($id){
    $this->db->where('id_user',$id);
    $this->db->delete('user');
    if($this->db->affected_rows()>0){
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
