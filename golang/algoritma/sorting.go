package main

import (
	"fmt"
	"log"
)

func buble_sort(arr [5]int) ([5]int, error) {

	var curren_awal = len(arr)
	for i := 0; i < curren_awal; i++ {
		var swapper = false
		for j := 0; j < (curren_awal - i - 1); j++ {

			//validasi selama emelemt sebelumnya bisa di swap ke eleent selanjutnya
			if arr[j] > arr[j+1] {
				arr[j], arr[j+1] = arr[j+1], arr[j] //swap

				fmt.Println(arr)
			}
			swapper = true
		}
		if swapper != true {
			break
		}
	}
	fmt.Print("\n")
	return arr, nil

}

func main() {

	log.Print("buble sort")
	var buble_arr = [5]int{30, 0, 3, 3, 12}
	result_buble_array, err1 := buble_sort(buble_arr)
	if err1 != nil {
		log.Print("error")
	}
	fmt.Println(result_buble_array)

}
