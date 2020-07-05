
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int codFornecedor, codConsultor, codProduto, produtos, tipoProduto, produtoPromocao;
    int cnpjFornecedor, cpfConsultor,quantProduto, descricaoFornecedor,nomeConsultor, descricaoProduto,prosseguir;
    float valorProduto, total_venda, totalVendaConsultor1, comissaoConsultor, desconto, total_venda_desconto, valorfinal, investimento, produtoMaiorvalor,produtoMenorvalor;
    float somarComissao = 0, somaValorproduto = 0, quantProdutoGol, somaValorprodutoGol= 0,	mediaFornecedorGol; 
    bool sair = false; 
    bool Numerovalido = true;
    
    while(not sair){
        
        cout<<" Informe o número referente ao código do fornecedor desejado:\n";
	        cout << "1 - 0310\n";
	        cout << "2 - 1511\n";
	        cout << "3 - 1820\n";
	        cout << "4 - 4769\n";
	        cin >> codFornecedor;
	        
        	cout << "\n\n";
        
        /* O cin.fail irá rastrear o erro caso o que for digitado seja diferente da variável número, ou seja, caracter, textos,etc.*/
		if(Numerovalido == true){
		if(cin.fail())
		{
		   	cout <<"O número digitado não é válido, foi digitado um caracter."<<endl;
			codFornecedor = false;		
		}
	
		if(codFornecedor <= 0)
		{ 
			Numerovalido = false;
			break;
		}
		
		if(Numerovalido == true)
		{	
		
        while (codFornecedor < 1 or codFornecedor > 4){
        	cout << "Opção do número do código do fornecedor informado inválido. Informe uma opção válida 1 - 4: \n";
        	cin >> codFornecedor;    
    	}
    	
        cout<<" Digite o número referente ao CNPJ da empresa fornecedora: \n";
	        cout <<"1 - 20.444.555/ 1111-00 \n";
	        cout << "2 - 77.666.555/2222-88 \n";
	        cout << "3 - 15.725.891/5555-44 \n";
	        cout << "4 - 81.456.782/4267-77 \n";
	        cin>>cnpjFornecedor;
            
        	cout << "\n\n";
        
		if(Numerovalido == true){
		if(cin.fail())
		{
		   	cout <<"O número digitado não é válido, foi digitado um caracter."<<endl;
			cnpjFornecedor = false;		
		}
	
		if(cnpjFornecedor <= 0)
		{ 
			Numerovalido = false;
			break;
		}
		
		if(Numerovalido == true)
		{	
		}
			
        while (cnpjFornecedor < 1 or cnpjFornecedor > 4){
            cout << "Opção do número do CNPJ informado inválido. Informe uma opção válida 1 - 4: \n";
            cin >> cnpjFornecedor;    
    	}
        
		cout<<" Digite o número referente a descrição da empresa fornecedora desejada:\n";
	        cout << "1 - COMPANHIA AÉREA GOL \n";
	        cout << "2 - HOTEL BEIRAMAR \n";
	        cout << "3 - CVC CRUZEIROS \n";
	        cout << "4 - VITAL CARD\n";
	        cin>>descricaoFornecedor;
        
        	cout << "\n\n";
        
		if(Numerovalido == true){
		if(cin.fail())
		{
		   	cout <<"O número digitado não é válido, foi digitado um caracter."<<endl;
			descricaoFornecedor = false;		
		}
	
		if(descricaoFornecedor <= 0)
		{ 
			Numerovalido = false;
			break;
		}
		
		if(Numerovalido == true)
		{	
		}
             
        while (descricaoFornecedor < 1 or descricaoFornecedor > 4){
            cout << " Opção do número da descrição informada inválida. Informe uma opção válida 1 - 4: \n";
            cin >> descricaoFornecedor;
    	}
        
        cout<<" Digite o número referente ao código do consultor: \n";
	        cout <<"1 - 4646 \n";
	        cout << "2 - 1512 \n";
	        cin>>codConsultor;
         
        	cout << "\n\n";
        
		if(Numerovalido == true){
		if(cin.fail())
		{
		   	cout <<"O número digitado não é válido, foi digitado um caracter."<<endl;
			codConsultor = false;		
		}
	
	if(codConsultor <= 0)
		{ 
			Numerovalido = false;
			break;
		}
		
		if(Numerovalido == true)
		{	
		}
		}
		
        while (codConsultor < 1 or codConsultor > 2){
            cout << " Opção do número digitado inválido. Informe uma opção válida 1 - 2: \n";
            cin >> codConsultor;
    	}
        
		cout<<" Digite o número referente ao CPF do consultor:\n";
	        cout << "1 - 044.958.222-15 \n";
	        cout << "2 - 014.578.656-12 \n";
	        cin>>cpfConsultor;
	            
	        cout << "\n\n";
        
		if(Numerovalido == true){
		if(cin.fail())
		{
		   	cout <<"O número digitado não é válido, foi digitado um caracter."<<endl;
			cpfConsultor = false;		
		}
	
		if(cpfConsultor <= 0)
		{ 
			Numerovalido = false;
			break;
		}
		
		if(Numerovalido == true)
		{	
		
		}
		}
		
        while (cpfConsultor < 1 or cpfConsultor > 2){
        	cout << " Opção do número digitado inválido. Informe uma opção válida 1 - 2: \n";
    		cin >> cpfConsultor;
    	}
            
		cout<<" Digite o número referente ao nome do consultor:\n";
	        cout << "1 - Beatriz Santana\n";
	        cout << "2 - Felipe Santos \n";
	        cin>>nomeConsultor;
	            
	        cout << "\n\n";
        
		if(Numerovalido == true){
		if(cin.fail())
		{
		   	cout <<"O número digitado não é válido, foi digitado um caracter."<<endl;
			nomeConsultor = false;		
		}
	
	if(nomeConsultor <= 0)
		{ 
			Numerovalido = false;
			break;
		}
		
		if(Numerovalido == true)
		{	
		}
		}
		    
        while (nomeConsultor < 1 or nomeConsultor> 2){
            cout << " Opção do número digitado inválido. Informe uma opção válida 1 - 2: \n";
            cin >> nomeConsultor;
    	}
     
        cout << "Qual é o código do produto ?\n";
	        cout << "10 - Passagens\n";
	        cout << "11 - Aluguel de Veículos\n";
	        cout << "12 - Hospedagem\n";
	        cout << "13 - Seguro de Viagem\n";
	        cout << "14 - Pacotes Turísticos\n";
	        cout << "15 - Cruzeiro marítimo \n";
	        cin >> produtos;
        
        	cout << "\n\n";
        
		if(Numerovalido == true){
		if(cin.fail())
		{
		   	cout <<"O número digitado não é válido, foi digitado um caracter."<<endl;
			produtos = false;		
		}
	
		if(produtos <= 0)
		{ 
			Numerovalido = false;
			break;
		}
		
		if(Numerovalido == true)
		{	
		}
		}     
        while (produtos < 10 or produtos > 15){
            cout << "O código do produto está inválido. Informe um código válido 10 - 15:\n ";
            cin >> produtos;
        }
        
        	cout <<"\n\n";
        
        cout << "Digite o código referente a descrição do produto desejado:\n";
	        cout << "1 - Pacote com 2 passagens ida e volta para Fernando de Noronha.\n";
	        cout << "2 - Aluguel de carro porte médio para Fortaleza. \n";
	        cout << "3 - Pacote incluso 2 diárias para Gramado com café da manhã incluso. \n";
	        cout << "4 - Pacote com Seguro de Viagem para 2 pessoas para Maceió.\n";
	        cout << "5 - Pacote promocional Mes das noivas com 15% de desconto. Saída de Salvador para Angra dos Reis( Vôo + 2 Hospedagens).\n";
	        cout << "6 - 5 noites no Cruzeiro MSC Fantasia, cabine com varanda inclusa 17m².\n";           
	        cin >> descricaoProduto;
	           
	        cout << "\n\n";
        
		if(Numerovalido == true){
		if(cin.fail())
		{
		   	cout <<"O número digitado não é válido, foi digitado um caracter."<<endl;
			descricaoProduto = false;		
		}
		if(descricaoProduto <= 0)
		{ 
			Numerovalido = false;
			break;
		}
		if(Numerovalido == true)
		{	
		}
		}
        while (descricaoProduto < 1 or descricaoProduto > 6){
            cout << "O código referente a descrição do produto está inválido. Informe um código válido 1 - 6:\n";
            cin >> descricaoProduto;
        }
	    cout << "Qual é a quantidade ?\n";
	       	cin >> quantProduto;
	            
	        cout << "\n\n";
        
		if(Numerovalido == true){
		if(cin.fail())
		{
		   	cout <<"O número digitado não é válido, foi digitado um caracter."<<endl;
			quantProduto = false;		
		}
	
		if(quantProduto <= 0)
		{ 
			Numerovalido = false;
			break;
		}
		if(Numerovalido == true)
		{	
		}
		}   
        cout << "Informe o valor do produto R$ :\n";
        cin >> valorProduto;
          
		if(Numerovalido == true){
		if(cin.fail())
		{
		   	cout <<"O número digitado não é válido, foi digitado um caracter."<<endl;
			valorProduto = false;		
		}
	
		if(valorProduto <= 0)
		{ 
			Numerovalido = false;
			break;
		}
		
		if(Numerovalido == true)
		{	
		}
		}
        cout << "\n\n";
              
	    if (produtoMaiorvalor == 0) {
	       produtoMaiorvalor = valorProduto;  //produto maior valor
	    }else{
	    	if (valorProduto > produtoMaiorvalor){
	    		produtoMaiorvalor = valorProduto;            
	        }
	    }     
	          
	    if (produtoMenorvalor == 0) {
	    	produtoMenorvalor = valorProduto; 
	    }else{
	    	if (valorProduto < produtoMenorvalor){
	    		produtoMenorvalor = valorProduto;  //produto menor valor 
	    	}
	    }  
          
        cout << "Qual é o tipo do produto ?\n";
	        cout << "01 - VIP\n";
	        cout << "02 - Convencional\n";
	        cin >> tipoProduto; 
	            
	        cout << "\n\n";
        
		if(Numerovalido == true){
		if(cin.fail())
		{
		   	cout <<"O número digitado não é válido, foi digitado um caracter."<<endl;
			tipoProduto = false;		
		}
	
		if(tipoProduto <= 0)
		{ 
			Numerovalido = false;
			break;
		}
		
		if(Numerovalido == true)
		{	
		}
		}    
        while (tipoProduto < 1 or tipoProduto > 2){
            cout << "O código referente ao tipo do produto está inválido. Informe um código válido 1 - 2:\n";
            cin >> tipoProduto;
        }      
        
        cout << "O produto escolhido estava na promoção?\n";
	        cout << "1 - Sim\n";
	        cout << "2 - Não\n";
	        cin >> produtoPromocao;
         
		if(Numerovalido == true){
		if(cin.fail())
		{
		   	cout <<"O número digitado não é válido, foi digitado um caracter."<<endl;
			produtoPromocao = false;		
		}
	
		if(produtoPromocao <= 0)
		{ 
			Numerovalido = false;
			break;
		}
		if(Numerovalido == true)
		{	
		}
		}
        cout << "\n\n";  
            
        int valor_desconto = 0;
		    
        while (produtoPromocao < 1 or produtoPromocao > 2){
            cout << " Opção do número do número digitado inválido. Informe uma opção válida 1 - 2: \n";
            cin >> produtoPromocao;            
    	}
    	
        if (produtoPromocao == 1){    // calculo desconto
            valor_desconto =  quantProduto * valorProduto;
            total_venda_desconto += valor_desconto - (valor_desconto * 0.15); 
        }else{
               total_venda +=  quantProduto * valorProduto;
        } 
        
	        valorfinal = total_venda_desconto + total_venda;
	        
	        investimento += (valor_desconto * 0.15);
			
			comissaoConsultor = ((valorfinal  * 5) /100 ); ////comissão de 5% 
		
		if(descricaoFornecedor == 1){ 		//Média do fornecedor Gol
			quantProdutoGol +=1;
			somaValorprodutoGol += valorProduto;
		}
		
		mediaFornecedorGol = somaValorprodutoGol / quantProdutoGol; 
		
		cout << "Deseja continuar no sistema?\n";
	        cout << "1 - Sim\n";
	        cout << "2 - Não\n";
	        cin >> prosseguir;    
        
        	cout << endl;
        
        while (prosseguir < 1 or prosseguir > 2){
            cout << "Opção inválida. Informe uma escolha válida 1 - 2: \n";
            cin >> prosseguir;
        }
        
        if (prosseguir == 2){
            sair = true;
        }else{
        	continue; // continuar o sistema
        	
            cout << "\n\n";            
        }            
		}	
	
			cout << fixed; //para fixar a precisao em 2 casas decimais
			
			cout.precision (2); // Esse precision é para quando exibir os valores finais, arredondar em até 2 casas
								//decimais. O número ficar mais preciso 
    
			cout << " A soma das vendas com e sem desconto foi de: "<< valorfinal <<endl;
			
			cout << " O valor da venda com desconto de 15 % foi de R$: "<<total_venda_desconto <<endl;
			
			cout <<" O valor total da venda sem desconto foi de R$: "<< total_venda <<endl;
    		
        	cout <<" O investimento da empresa foi de R$: " << investimento <<endl;

			cout << " A comissão do consultor " <<" foi de R$: " << comissaoConsultor <<endl;
        
			cout<<" O produto com maior valor foi R$: "<< produtoMaiorvalor <<endl; 
		
        	cout<<" O produto com menor valor foi R$: "<< produtoMenorvalor <<endl; 
			
			cout << " A média de preço da Companhia Aérea GOL foi R$: " << 	mediaFornecedorGol <<endl;	
        	
       		cout << "\n\n";  
	
 			return 0;
  }
}
}
}
}