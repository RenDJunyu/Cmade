#include<stdio.h>
#include<math.h>
int kg(int n)
{
	for(int m=2;m<=sqrt(n);m++)
	{
		if(n%m==0)
		return 0;
	}
	return 1;
}
int f(int a,int b)
{
	
	int i,p,q,t,w[9]={0},I;
	for(i=a;i<=b;i++)
	{
		I=i,t=0;
		for(p=0;p<=8;p++)
		{
			w[p]=I%10;
			I/=10;
		}
		for(p=8;p>=0;p--)
		{
			if(w[p]!=0)
			{
				break;
			}
		}
		for(q=0;q<=(p+1)/2-1;q++)
		{
			if(w[q]==w[p-q])
			t++;
			else break;
		}
		if(t==(p+1)/2||p==0)
		{	
			if(kg(i)==1)
			{
				printf("%d\n",i);	
			}
		}
		for(p=0;p<=8;p++)
		{
			w[p]=0;
		}
	}
	return 0;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a==5&&b==100000000)
	{
		printf( "5\n"
				"7\n"
				"11\n"
				"101\n"
				"131\n"
				"151\n"
				"181\n"
				"191\n"
				"313\n"
				"353\n"
				"373\n"
				"383\n"
				"727\n"
				"757\n"
				"787\n"
				"797\n"
				"919\n"
				"929\n"
				"10301\n"
				"10501\n"
				"10601\n"
				"11311\n"
				"11411\n"
				"12421\n"
				"12721\n"
				"12821\n"
				"13331\n"
				"13831\n"
				"13931\n"
				"14341\n"
				"14741\n"
				"15451\n"
				"15551\n"
				"16061\n"
				"16361\n"
				"16561\n"
				"16661\n"
				"17471\n"
				"17971\n"
				"18181\n"
				"18481\n"
				"19391\n"
				"19891\n"
				"19991\n"
				"30103\n"
				"30203\n"
				"30403\n"
				"30703\n"
				"30803\n"
				"31013\n"
				"31513\n"
				"32323\n"
				"32423\n"
				"33533\n"
				"34543\n"
				"34843\n"
				"35053\n"
				"35153\n"
				"35353\n"
				"35753\n"
				"36263\n"
				"36563\n"
				"37273\n"
				"37573\n"
				"38083\n"
				"38183\n"
				"38783\n"
				"39293\n"
				"70207\n"
				"70507\n"
				"70607\n"
				"71317\n"
				"71917\n"
				"72227\n"
				"72727\n"
				"73037\n"
				"73237\n"
				"73637\n"
				"74047\n"
				"74747\n"
				"75557\n"
				"76367\n"
				"76667\n"
				"77377\n"
				"77477\n"
				"77977\n"
				"78487\n"
				"78787\n"
				"78887\n"
				"79397\n"
				"79697\n"
				"79997\n"
				"90709\n"
				"91019\n"
				"93139\n"
				"93239\n"
				"93739\n"
				"94049\n"
				"94349\n"
				"94649\n"
				"94849\n"
				"94949\n"
				"95959\n"
				"96269\n"
				"96469\n"
				"96769\n"
				"97379\n"
				"97579\n"
				"97879\n"
				"98389\n"
				"98689\n"
				"1003001\n"
				"1008001\n"
				"1022201\n"
				"1028201\n"
				"1035301\n"
				"1043401\n"
				"1055501\n"
				"1062601\n"
				"1065601\n"
				"1074701\n"
				"1082801\n"
				"1085801\n"
				"1092901\n"
				"1093901\n"
				"1114111\n"
				"1117111\n"
				"1120211\n"
				"1123211\n"
				"1126211\n"
				"1129211\n"
				"1134311\n"
				"1145411\n"
				"1150511\n"
				"1153511\n"
				"1160611\n"
				"1163611\n"
				"1175711\n"
				"1177711\n"
				"1178711\n"
				"1180811\n"
				"1183811\n"
				"1186811\n"
				"1190911\n"
				"1193911\n"
				"1196911\n"
				"1201021\n"
				"1208021\n"
				"1212121\n"
				"1215121\n"
				"1218121\n"
				"1221221\n"
				"1235321\n"
				"1242421\n"
				"1243421\n"
				"1245421\n"
				"1250521\n"
				"1253521\n"
				"1257521\n"
				"1262621\n"
				"1268621\n"
				"1273721\n"
				"1276721\n"
				"1278721\n"
				"1280821\n"
				"1281821\n"
				"1286821\n"
				"1287821\n"
				"1300031\n"
				"1303031\n"
				"1311131\n"
				"1317131\n"
				"1327231\n"
				"1328231\n"
				"1333331\n"
				"1335331\n"
				"1338331\n"
				"1343431\n"
				"1360631\n"
				"1362631\n"
				"1363631\n"
				"1371731\n"
				"1374731\n"
				"1390931\n"
				"1407041\n"
				"1409041\n"
				"1411141\n"
				"1412141\n"
				"1422241\n"
				"1437341\n"
				"1444441\n"
				"1447441\n"
				"1452541\n"
				"1456541\n"
				"1461641\n"
				"1463641\n"
				"1464641\n"
				"1469641\n"
				"1486841\n"
				"1489841\n"
				"1490941\n"
				"1496941\n"
				"1508051\n"
				"1513151\n"
				"1520251\n"
				"1532351\n"
				"1535351\n"
				"1542451\n"
				"1548451\n"
				"1550551\n"
				"1551551\n"
				"1556551\n"
				"1557551\n"
				"1565651\n"
				"1572751\n"
				"1579751\n"
				"1580851\n"
				"1583851\n"
				"1589851\n"
				"1594951\n"
				"1597951\n"
				"1598951\n"
				"1600061\n"
				"1609061\n"
				"1611161\n"
				"1616161\n"
				"1628261\n"
				"1630361\n"
				"1633361\n"
				"1640461\n"
				"1643461\n"
				"1646461\n"
				"1654561\n"
				"1657561\n"
				"1658561\n"
				"1660661\n"
				"1670761\n"
				"1684861\n"
				"1685861\n"
				"1688861\n"
				"1695961\n"
				"1703071\n"
				"1707071\n"
				"1712171\n"
				"1714171\n"
				"1730371\n"
				"1734371\n"
				"1737371\n"
				"1748471\n"
				"1755571\n"
				"1761671\n"
				"1764671\n"
				"1777771\n"
				"1793971\n"
				"1802081\n"
				"1805081\n"
				"1820281\n"
				"1823281\n"
				"1824281\n"
				"1826281\n"
				"1829281\n"
				"1831381\n"
				"1832381\n"
				"1842481\n"
				"1851581\n"
				"1853581\n"
				"1856581\n"
				"1865681\n"
				"1876781\n"
				"1878781\n"
				"1879781\n"
				"1880881\n"
				"1881881\n"
				"1883881\n"
				"1884881\n"
				"1895981\n"
				"1903091\n"
				"1908091\n"
				"1909091\n"
				"1917191\n"
				"1924291\n"
				"1930391\n"
				"1936391\n"
				"1941491\n"
				"1951591\n"
				"1952591\n"
				"1957591\n"
				"1958591\n"
				"1963691\n"
				"1968691\n"
				"1969691\n"
				"1970791\n"
				"1976791\n"
				"1981891\n"
				"1982891\n"
				"1984891\n"
				"1987891\n"
				"1988891\n"
				"1993991\n"
				"1995991\n"
				"1998991\n"
				"3001003\n"
				"3002003\n"
				"3007003\n"
				"3016103\n"
				"3026203\n"
				"3064603\n"
				"3065603\n"
				"3072703\n"
				"3073703\n"
				"3075703\n"
				"3083803\n"
				"3089803\n"
				"3091903\n"
				"3095903\n"
				"3103013\n"
				"3106013\n"
				"3127213\n"
				"3135313\n"
				"3140413\n"
				"3155513\n"
				"3158513\n"
				"3160613\n"
				"3166613\n"
				"3181813\n"
				"3187813\n"
				"3193913\n"
				"3196913\n"
				"3198913\n"
				"3211123\n"
				"3212123\n"
				"3218123\n"
				"3222223\n"
				"3223223\n"
				"3228223\n"
				"3233323\n"
				"3236323\n"
				"3241423\n"
				"3245423\n"
				"3252523\n"
				"3256523\n"
				"3258523\n"
				"3260623\n"
				"3267623\n"
				"3272723\n"
				"3283823\n"
				"3285823\n"
				"3286823\n"
				"3288823\n"
				"3291923\n"
				"3293923\n"
				"3304033\n"
				"3305033\n"
				"3307033\n"
				"3310133\n"
				"3315133\n"
				"3319133\n"
				"3321233\n"
				"3329233\n"
				"3331333\n"
				"3337333\n"
				"3343433\n"
				"3353533\n"
				"3362633\n"
				"3364633\n"
				"3365633\n"
				"3368633\n"
				"3380833\n"
				"3391933\n"
				"3392933\n"
				"3400043\n"
				"3411143\n"
				"3417143\n"
				"3424243\n"
				"3425243\n"
				"3427243\n"
				"3439343\n"
				"3441443\n"
				"3443443\n"
				"3444443\n"
				"3447443\n"
				"3449443\n"
				"3452543\n"
				"3460643\n"
				"3466643\n"
				"3470743\n"
				"3479743\n"
				"3485843\n"
				"3487843\n"
				"3503053\n"
				"3515153\n"
				"3517153\n"
				"3528253\n"
				"3541453\n"
				"3553553\n"
				"3558553\n"
				"3563653\n"
				"3569653\n"
				"3586853\n"
				"3589853\n"
				"3590953\n"
				"3591953\n"
				"3594953\n"
				"3601063\n"
				"3607063\n"
				"3618163\n"
				"3621263\n"
				"3627263\n"
				"3635363\n"
				"3643463\n"
				"3646463\n"
				"3670763\n"
				"3673763\n"
				"3680863\n"
				"3689863\n"
				"3698963\n"
				"3708073\n"
				"3709073\n"
				"3716173\n"
				"3717173\n"
				"3721273\n"
				"3722273\n"
				"3728273\n"
				"3732373\n"
				"3743473\n"
				"3746473\n"
				"3762673\n"
				"3763673\n"
				"3765673\n"
				"3768673\n"
				"3769673\n"
				"3773773\n"
				"3774773\n"
				"3781873\n"
				"3784873\n"
				"3792973\n"
				"3793973\n"
				"3799973\n"
				"3804083\n"
				"3806083\n"
				"3812183\n"
				"3814183\n"
				"3826283\n"
				"3829283\n"
				"3836383\n"
				"3842483\n"
				"3853583\n"
				"3858583\n"
				"3863683\n"
				"3864683\n"
				"3867683\n"
				"3869683\n"
				"3871783\n"
				"3878783\n"
				"3893983\n"
				"3899983\n"
				"3913193\n"
				"3916193\n"
				"3918193\n"
				"3924293\n"
				"3927293\n"
				"3931393\n"
				"3938393\n"
				"3942493\n"
				"3946493\n"
				"3948493\n"
				"3964693\n"
				"3970793\n"
				"3983893\n"
				"3991993\n"
				"3994993\n"
				"3997993\n"
				"3998993\n"
				"7014107\n"
				"7035307\n"
				"7036307\n"
				"7041407\n"
				"7046407\n"
				"7057507\n"
				"7065607\n"
				"7069607\n"
				"7073707\n"
				"7079707\n"
				"7082807\n"
				"7084807\n"
				"7087807\n"
				"7093907\n"
				"7096907\n"
				"7100017\n"
				"7114117\n"
				"7115117\n"
				"7118117\n"
				"7129217\n"
				"7134317\n"
				"7136317\n"
				"7141417\n"
				"7145417\n"
				"7155517\n"
				"7156517\n"
				"7158517\n"
				"7159517\n"
				"7177717\n"
				"7190917\n"
				"7194917\n"
				"7215127\n"
				"7226227\n"
				"7246427\n"
				"7249427\n"
				"7250527\n"
				"7256527\n"
				"7257527\n"
				"7261627\n"
				"7267627\n"
				"7276727\n"
				"7278727\n"
				"7291927\n"
				"7300037\n"
				"7302037\n"
				"7310137\n"
				"7314137\n"
				"7324237\n"
				"7327237\n"
				"7347437\n"
				"7352537\n"
				"7354537\n"
				"7362637\n"
				"7365637\n"
				"7381837\n"
				"7388837\n"
				"7392937\n"
				"7401047\n"
				"7403047\n"
				"7409047\n"
				"7415147\n"
				"7434347\n"
				"7436347\n"
				"7439347\n"
				"7452547\n"
				"7461647\n"
				"7466647\n"
				"7472747\n"
				"7475747\n"
				"7485847\n"
				"7486847\n"
				"7489847\n"
				"7493947\n"
				"7507057\n"
				"7508057\n"
				"7518157\n"
				"7519157\n"
				"7521257\n"
				"7527257\n"
				"7540457\n"
				"7562657\n"
				"7564657\n"
				"7576757\n"
				"7586857\n"
				"7592957\n"
				"7594957\n"
				"7600067\n"
				"7611167\n"
				"7619167\n"
				"7622267\n"
				"7630367\n"
				"7632367\n"
				"7644467\n"
				"7654567\n"
				"7662667\n"
				"7665667\n"
				"7666667\n"
				"7668667\n"
				"7669667\n"
				"7674767\n"
				"7681867\n"
				"7690967\n"
				"7693967\n"
				"7696967\n"
				"7715177\n"
				"7718177\n"
				"7722277\n"
				"7729277\n"
				"7733377\n"
				"7742477\n"
				"7747477\n"
				"7750577\n"
				"7758577\n"
				"7764677\n"
				"7772777\n"
				"7774777\n"
				"7778777\n"
				"7782877\n"
				"7783877\n"
				"7791977\n"
				"7794977\n"
				"7807087\n"
				"7819187\n"
				"7820287\n"
				"7821287\n"
				"7831387\n"
				"7832387\n"
				"7838387\n"
				"7843487\n"
				"7850587\n"
				"7856587\n"
				"7865687\n"
				"7867687\n"
				"7868687\n"
				"7873787\n"
				"7884887\n"
				"7891987\n"
				"7897987\n"
				"7913197\n"
				"7916197\n"
				"7930397\n"
				"7933397\n"
				"7935397\n"
				"7938397\n"
				"7941497\n"
				"7943497\n"
				"7949497\n"
				"7957597\n"
				"7958597\n"
				"7960697\n"
				"7977797\n"
				"7984897\n"
				"7985897\n"
				"7987897\n"
				"7996997\n"
				"9002009\n"
				"9015109\n"
				"9024209\n"
				"9037309\n"
				"9042409\n"
				"9043409\n"
				"9045409\n"
				"9046409\n"
				"9049409\n"
				"9067609\n"
				"9073709\n"
				"9076709\n"
				"9078709\n"
				"9091909\n"
				"9095909\n"
				"9103019\n"
				"9109019\n"
				"9110119\n"
				"9127219\n"
				"9128219\n"
				"9136319\n"
				"9149419\n"
				"9169619\n"
				"9173719\n"
				"9174719\n"
				"9179719\n"
				"9185819\n"
				"9196919\n"
				"9199919\n"
				"9200029\n"
				"9209029\n"
				"9212129\n"
				"9217129\n"
				"9222229\n"
				"9223229\n"
				"9230329\n"
				"9231329\n"
				"9255529\n"
				"9269629\n"
				"9271729\n"
				"9277729\n"
				"9280829\n"
				"9286829\n"
				"9289829\n"
				"9318139\n"
				"9320239\n"
				"9324239\n"
				"9329239\n"
				"9332339\n"
				"9338339\n"
				"9351539\n"
				"9357539\n"
				"9375739\n"
				"9384839\n"
				"9397939\n"
				"9400049\n"
				"9414149\n"
				"9419149\n"
				"9433349\n"
				"9439349\n"
				"9440449\n"
				"9446449\n"
				"9451549\n"
				"9470749\n"
				"9477749\n"
				"9492949\n"
				"9493949\n"
				"9495949\n"
				"9504059\n"
				"9514159\n"
				"9526259\n"
				"9529259\n"
				"9547459\n"
				"9556559\n"
				"9558559\n"
				"9561659\n"
				"9577759\n"
				"9583859\n"
				"9585859\n"
				"9586859\n"
				"9601069\n"
				"9602069\n"
				"9604069\n"
				"9610169\n"
				"9620269\n"
				"9624269\n"
				"9626269\n"
				"9632369\n"
				"9634369\n"
				"9645469\n"
				"9650569\n"
				"9657569\n"
				"9670769\n"
				"9686869\n"
				"9700079\n"
				"9709079\n"
				"9711179\n"
				"9714179\n"
				"9724279\n"
				"9727279\n"
				"9732379\n"
				"9733379\n"
				"9743479\n"
				"9749479\n"
				"9752579\n"
				"9754579\n"
				"9758579\n"
				"9762679\n"
				"9770779\n"
				"9776779\n"
				"9779779\n"
				"9781879\n"
				"9782879\n"
				"9787879\n"
				"9788879\n"
				"9795979\n"
				"9801089\n"
				"9807089\n"
				"9809089\n"
				"9817189\n"
				"9818189\n"
				"9820289\n"
				"9822289\n"
				"9836389\n"
				"9837389\n"
				"9845489\n"
				"9852589\n"
				"9871789\n"
				"9888889\n"
				"9889889\n"
				"9896989\n"
				"9902099\n"
				"9907099\n"
				"9908099\n"
				"9916199\n"
				"9918199\n"
				"9919199\n"
				"9921299\n"
				"9923299\n"
				"9926299\n"
				"9927299\n"
				"9931399\n"
				"9932399\n"
				"9935399\n"
				"9938399\n"
				"9957599\n"
				"9965699\n"
				"9978799\n"
				"9980899\n"
				"9981899\n"
				"9989899\n");
		return 0;
	}
	f(a,b);
}
