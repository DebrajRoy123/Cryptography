#include<bits/stdc++.h>
using namespace std;
string encrypt_affine(string msg,int a,int b)
{
	string cipher = "";
	for (int i = 0; i < msg.length(); i++)
	{
		if(msg[i]!=' ')
			cipher = cipher + (char) ((((a * (msg[i]-'A') ) + b) % 26) + 'A');
		else
			cipher += msg[i];	
	}
	return cipher;
}

string decrypt_affine(string cipher,int a,int b)
{
	string msg = "";
	int a_inv = 0;
	for (int i = 0; i < 26; i++)
	{
        if ((a * i) % 26 == 1)
		{
			a_inv = i;
		}
	}
	for (int i = 0; i < cipher.length(); i++)
	{
		if(cipher[i]!=' ')
			msg = msg + (char) (((a_inv * ((cipher[i]+'A' - b)) % 26)) + 'A');
		else
			msg += cipher[i];
	}
	return msg;
}

int main()
{
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
	string msg = "AFFINE";	
    cout<<"Enter a string to be encrypted: ";
    cin>>msg;
	string cipherText = encrypt_affine(msg,a,b);
	cout << "Encrypted Message is : " << cipherText<<endl;	
	cout << "Decrypted Message is: " << decrypt_affine(cipherText,a,b);
	return 0;
}
