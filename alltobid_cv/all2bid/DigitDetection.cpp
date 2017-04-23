#include "LiveCapture.h"

int main() {
	LiveCapture* pLiveCap = new LiveCapture;
	while (true) {
		pLiveCap->imageProcess();
		if (cv::waitKey(1)) {
			//break;
		}
	}
	
	return 0;
}