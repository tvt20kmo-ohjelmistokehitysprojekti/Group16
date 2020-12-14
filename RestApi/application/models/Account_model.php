<<<<<<< Updated upstream
<?php
/**
 *
 */
class Account_model extends CI_model
{
    function otto($id,$sum)
	{
        $call="call otto(?,?)";
        $data=array('id'=>$id,'sum'=>$sum);
        $this->db->query($call,$data);
        if($this->db->affected_rows()!==NULL){
            return TRUE; 
          }
          else {
            return FALSE;
          } 
	}
          
        function Saldo($idAccount)
    {
        $sql = 'select Balance-CreditLimit from Account where idAccount=?';
        $query = $this->db->query($sql,$idAccount);
        $result = $query->result_array();
        if (isset( $result[0]['Saldo'])){
            return $result[0];
        }
        else {
            return false;
        }
    }
    // toimiikohan tämä tapahtumakysely?
    function tapahtumat($id)
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
    
        //saldonsiirtoyritys
        function siirto($id, $id2, $sum)
		{
          $call="call siirto(?,?,?)";
          $data=array('id'=>$id, 'id2'=>$id2, 'sum'=>$sum);
          $this->db->query($call,$data);
          if($this->db->affected_rows()!==NULL){
              return TRUE; 
            }
            else {
              return FALSE;
            }  
		}
  function get_Account($id)
  {
    $this->db->select('*');
    $this->db->from('Account');
    if($id !== NULL) {
      $this->db->where('idAccount',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_Account($add_data)
  {
    $this->db->insert('Account',$add_data);
    if($this->db->affected_rows()!==NULL){
      return TRUE; 
    }
    else {
      return FALSE;
    }  
  }
  function update_Account($id, $update_data)
  {
    $this->db->where('idAccount',$id);
    $this->db->update('Account',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE; 
    }
    else {
      return FALSE;
    }
  }

  function delete_Account($id)
  {
    $this->db->where('idAccount',$id);
    $this->db->delete('Account');
    if($this->db->affected_rows()>0){
      return TRUE; 
    }
    else {
      return FALSE;
    }
  }


}
=======
<?php
/**
 *
 */
class Account_model extends CI_model
{
    function otto($id,$sum)
	{
        $call="call otto(?,?)";
        $data=array('id'=>$id,'sum'=>$sum);
        $this->db->query($call,$data);
        if($this->db->affected_rows()!==NULL){
            return TRUE; 
          }
          else {
            return FALSE;
          } 
	}
          
  
    
        
  function siirto($id, $id2, $sum)
	{
    $call="call siirto(?,?,?)";
    $data=array('id'=>$id, 'id2'=>$id2, 'sum'=>$sum);
    $this->db->query($call,$data);
    if($this->db->affected_rows()!==NULL){
        return TRUE; 
      }
      else {
        return FALSE;
      }  
	}
  function get_Account($id)
  {
    $this->db->select('*');
    $this->db->from('Account');
    if($id !== NULL) {
      $this->db->where('idAccount',$id);
    }
    return $this->db->get()->result_array();
  }
  function add_Account($add_data)
  {
    $this->db->insert('Account',$add_data);
    if($this->db->affected_rows()!==NULL){
      return TRUE; 
    }
    else {
      return FALSE;
    }  
  }
  function update_Account($id, $update_data)
  {
    $this->db->where('idAccount',$id);
    $this->db->update('Account',$update_data);
    if($this->db->affected_rows()>0){
      return TRUE; 
    }
    else {
      return FALSE;
    }
  }

  function delete_Account($id)
  {
    $this->db->where('idAccount',$id);
    $this->db->delete('Account');
    if($this->db->affected_rows()>0){
      return TRUE; 
    }
    else {
      return FALSE;
    }
  }


}
>>>>>>> Stashed changes
