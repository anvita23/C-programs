import java.util.*; 
class stablemarriage
{ 
static int N = 4;  
static boolean wwpm(int p[][], int ww, int m, int mm) 
{ 
	for (int i = 0; i < N; i++) 
	{ 
		if (p[ww][i] == mm) 
			return true; 
		if (p[ww][i] == m) 
			return false; 
	} 
	return false; 
} 
static void stableMarriage(int p[][]) 
{ 
	int wwPartner[] = new int[N]; 
	boolean mFree[] = new boolean[N]; 
	int freeCount = N; 
	while (freeCount > 0) 
	{ 
		int m; 
		for (m = 0; m < N; m++) 
			if (mFree[m] == false) 
				break; 
		for (int i = 0; i < N && mFree[m] == false; i++) 
		{ 
			int ww = p[m][i]; 
			if (wwPartner[ww - N] == -1) 
			{ 
				wwPartner[ww - N] = m; 
				mFree[m] = true; 
				freeCount--; 
			} 

			else
				{
				int mm = wwPartner[ww - N]; 
				if (wwpm(p, ww, m, mm) == false) 
				{ 
					wwPartner[ww - N] = m; 
					mFree[m] = true; 
					mFree[mm] = false; 
				} 
			} 
		} 
	}
System.out.println("wwoman Man"); 
for (int i = 0; i < N; i++) 
{ 
	System.out.print(" "); 
	System.out.println(i + N + "	 " + wwPartner[i]); 
} 
} 
public static void main(String[] args) 
{ 
	int p[][] =new int[][]{{7, 5, 6, 4}, 
					{5, 4, 6, 7}, 
					{4, 5, 6, 7}, 
					{4, 5, 6, 7}, 
					{0, 1, 2, 3}, 
					{0, 1, 2, 3}, 
					{0, 1, 2, 3}, 
					{0, 1, 2, 3}}; 
	stableMarriage(p); 
} 
} 