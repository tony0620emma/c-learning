#include <tonc.h>

void PlotPixel3(int x, int y, u16 clr)
{
	    vid_mem[y*240+x]= clr;
}

int main()
{
	int ii;
	    // --- using function ---
	ASM_CMT("using function");
	for(ii=0; ii<240; ii++)
		PlotPixel3(ii, 16, CLR_LIME);

	/* --- using inline --- */
	ASM_CMT("using inline");
	for(ii=0; ii<240; ii++)
		m3_plot(ii, 12, CLR_RED);

	while(1);

	return 0;
}
