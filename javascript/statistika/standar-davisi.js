

/**mengembalikan hasil float dari standar daviasi 
 * **/
function Standar_daviasi(array_data) {
  const panjang_data = array_data.length
  let jumlah_data = 0;
 
  for(let i=0;i < panjang_data;i++){
    jumlah_data += array_data[i]
    //console.log("data ",array_data[i],"hasil tambah :",jumlah_data);
  };

  const rata_rata = jumlah_data / panjang_data;

  let line_top_result = 0;
  for(let i = 0;i < panjang_data ;i++){
    let line_top_ok = array_data[i] - rata_rata;
    //console.log("hasil pengurangan :",line_top_ok;
    if(line_top_ok == 0){
      continue
    }
    let line_top_pangkat = line_top_ok * line_top_ok
//    console.log("haisl pangkat : ",line_top_pangkat);

   line_top_result += line_top_pangkat;
  }
  //bulatkan dengan fungsi , Math.ceil() => bulatkan ke atas tapi hasilnya beda
  const varian_populasi =parseFloat((line_top_result / panjang_data).toFixed(2));//akan menaikan nilainya
  
//keluarkan hasil akarnya untuk hasil akhir standar daviasi
  //console.log("hasil populasi :",varian_populasi);
  return parseFloat(Math.sqrt(varian_populasi).toFixed(2));
  //}else{
    //console.error("data bukan numerik")
 // }
  ;
}
const standar_daviasi = Standar_daviasi([6,7,8,8,9,10]);
console.log("standar daviis :",standar_daviasi);

