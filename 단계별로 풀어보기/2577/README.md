<h1>포인터 사용</h1>
<h2>C++</h2>

<p>
  
	int* analyzeResult(int result) {
	    int cnt[10] = { 0 };
	
	    while(result / 10 != 0){
	        cnt[result % 10]++;
	        result = result / 10;			
	    }	
	
	    cnt[result % 10]++;
	    return cnt;
  	}

</p>

<p>
  
  이렇게 지역변수로 선언하면 cnt는 함수 analyzeResult가 끝나면 사라진다.<br>
  아래 코드에서는 이미 사라진 변수를 출력하고 있는 것이다.
</p>

<p>
	
	int printCntResult(int* cnt) {
	
	    for (int i = 0; i < 10; i++) {
		cout << cnt[i] << "\n";
	    }

	    return 0;
	}

</p>
  
  
