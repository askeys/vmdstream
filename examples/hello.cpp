#include <vmdstream/vmdstream.h>

using namespace std;

int main( int argc, char *argv[] ) 
{ 
	
	vmdsock_t vmdsock = newvmdsock();
	vmdstream vmd(vmdsock); 
	
	cout << "drawing spheres\n";
	
	for (int i=0; i<10; i++) {
		vmd << "draw sphere {" << i << " 0 0}" << endl;
		cout << "draw sphere {" << i << " 0 0}" << endl;
	}

	for (int i=0; i<10; i++) {
		vmd << "draw sphere {0 " << i << " 0}" << endl;
		cout << "draw sphere {0 " << i << " 0}" << endl;
	}

	cout << "finished" << endl; 
	closevmdsock(vmdsock);	
} 
