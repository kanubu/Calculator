#include <iostream>
#include <cstdint>
#include <bitset>
#include <climits>

using namespace std;

int main()
{
	uint32_t z = 9;
	uint32_t sum;
		cout << "\nz in bin: \n" << bitset<32>(z) << "\n";
	uint32_t q = 3;
		cout << "q in bin: \n" << bitset<32>(q) << "\n";
	cout << "---------------------------------------------\n";
	sum = (z ^ q);
	cout << "sum before while in bin: \n" << bitset<32>(sum) << "\n";
	uint32_t carry = (z & q);
	cout << "carry before while in bin: \n" << bitset<32>(carry) << "\n";
	 while (carry != 0) 
	 {
	    carry = carry << 1; // left shift the carry
    		cout << "carry inside while in bin after initial left shift: \n" << bitset<32>(carry) << "\n";
	    z = sum; // initialize x as sum
			cout << "z inside while in bin after initializing it as sum: \n" << bitset<32>(z) << "\n";
	    q = carry; // initialize y as carry
			cout << "q inside while in bin after initializing it as carry: \n" << bitset<32>(q) << "\n";
	    sum = z ^ q; // sum is calculated
	    		cout << "sum inside while in bin: \n" << bitset<32>(sum) << "\n";
	    carry = z & q; /* carry is calculated, the loop condition is 
	                      evaluated and the process is repeated until 
	                      carry is equal to 0.
	                    */
		cout << "carry inside whileat bottom in bin: \n" << bitset<32>(carry) << "\n";
	}

	cout << "ans in bin: " << bitset<32>(sum) << "\n";
	cout<< "ans in dec: " << sum << "\n";
	
	// for(int i = 0; i < 32; i++)
	// {
	// 	z = (( z << 2) | (1 << 1) | (1 << 0));
	// 	cout<< "\nset the 1st bit of z: " << z << "\n";
	// 	cout << "\nz in bin: " << bitset<32>(z) << "\n";
	// 	if(z == UINT_MAX )
	// 		break;
	// }
	return 0;
}