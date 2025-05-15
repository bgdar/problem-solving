package main

import (
	"fmt"
)

func lengthOfLongestSubstring(s string) (int, string, error) {
	var panjang_str = 0

	var chartOriginalSrt = []rune(s)
	var chartContainer = []rune{} //simpan sub string yang tidak duplicat

	for _, chart1 := range chartOriginalSrt {

		for index2, chart2 := range chartContainer {
			if chart1 == chart2 {
				chartContainer = chartContainer[index2+1:]

			}
		}

		chartContainer = append(chartContainer, chart1)
		if len(chartContainer) > int(panjang_str) {
			panjang_str = len(chartContainer)
		}
	}
	//di leecode hanya mereturn panjang_str bertipe int
	return int(panjang_str), string(chartContainer), nil

}

func main() {
	hasil, chart_str, err := lengthOfLongestSubstring("pwwkew")

	if err != nil {
		fmt.Print("ada kesalahan : ", err)
	}

	fmt.Printf("panjang string %d dari substring %s\n", hasil, chart_str)
}
