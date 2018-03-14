gfdes (23 sloc)  432 Bytes
import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
nextLine();
		str=str.replaceAll(" ","");
		int len=str.length();
	
		for(int i=0;i<len;i++)
		{
			char c=str.charAt(i);
			if(Character.isDigit(c))
			{
				count++;
			}
		}
	            System.out.println(count);
	}
}
