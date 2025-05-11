
/// mengembalikan array 2 nilai [nilai1,nilai2,index1,index2] yakni hasil dari pertabahan 2 nilai index ini dan di mana letak element | indexnya
pub fn two_satck(nums:&[i32],target:&i32) ->Result<[i32;4],String>{
    for i in 0..nums.len() {
        // (i +  1) = untuk menghindari pegecekan yang sama dengan dirinya sendiri
        for j in (i + 1)..nums.len() {           
        if nums[i] + nums[j] == *target { //dereference karena di bandingkan dgn nilai
            return Ok([nums[i],nums[j],i as i32 ,j as i32]);//langsung kembalikan hasil array jika sudah bisa di
                                         //tambah
        }
    }
       
    }
 Err(String::from("Tidak di temukanya pasangan yang cocok dari nilai array yang di berikan \n"))
}

