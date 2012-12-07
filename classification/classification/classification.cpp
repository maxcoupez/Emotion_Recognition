// classification.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "stdafx.h"
#include "imgProcessing.h"

using namespace std;

int main()
{
	cout << "Ho ho ho " << endl;
	ImgProcessing processImg;

	/** Load image **/
	IplImage *img = cvLoadImage("test_face.jpg");
        if (!img) {
                printf("Error: Couldn't open the image file.\n");
                return 1;
        }

	/** Init with whatever model you want **/
	processImg.init("model_kdef_sig");
	//processImg.init("model_kdef_rbf");

	/** Perform LBP + SVM **/
	cout << "emotion: " << processImg.processImg(img) << endl;

	system("pause");
	return 0;
}
