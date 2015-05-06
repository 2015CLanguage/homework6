+#include <stdio.h>
+#define N 4
+#define M 5
+int main()
+{int i,j,a[N][M],max,t,flag,k;
+printf("请输入数组\n");
+   for (i=0;i<N;i++)
+	   for (j=0;j<M;j++)
+		   
+		   scanf("%d",&a[i][j]);
+
+
+   for (i=0;i<N;i++)
+          {max=a[i][0];
+                                    
+           for (j=0;j<M;j++)
+			   if (a[i][j]>max)
+			   {max=a[i][j];
+			    t=j;}
+flag=1;
+
+        for (k=0;k<N;k++)
+            if(max>a[k][t])
+			        {flag=0;
+	            break;}
+
+	    if(flag)
+	        {printf("a[%d][%d]=%d\n",i,t,max);
+	           break;}
+
+
+   }
+
+
+if(!flag)
+ printf("不存在\n");
+
+
+
+
+
+
+return 0;
+}
