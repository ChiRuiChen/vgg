//Numpy array shape [3, 3, 3, 64]
//Min -0.671400070190
//Max 0.608515918255
//Number of zeros 0

#ifndef W2_H_
#define W2_H_

#ifndef __SYNTHESIS__
model_default_t w2[1728];
#else
model_default_t w2[1728] = {0.4294705689, 0.5503794551, 0.4800153971, 0.3734669983, 0.4400745332, 0.4085474014, -0.0613601133, -0.0813870355, -0.0651455522, 0.2747698724, 0.3457390666, 0.3104772568, 0.0386807770, 0.0406322069, 0.0502023660, -0.3672233522, -0.4535013139, -0.4033834338, -0.0574681684, -0.0586349145, -0.0508716851, -0.2622496784, -0.3306696713, -0.2852275074, -0.3500967622, -0.4850302041, -0.4185163379, 0.1172738671, 0.0208774377, -0.1726966798, 0.1620626301, 0.0473412387, -0.1703750491, 0.1356939971, 0.0418543853, -0.1543515325, 0.1483501643, 0.0310493708, -0.1876014918, 0.2022984475, 0.0658102185, -0.1775715649, 0.1616884172, 0.0462574959, -0.1743999720, 0.1293442845, 0.0316787697, -0.1660026610, 0.1715724170, 0.0547101051, -0.1666667312, 0.1387104541, 0.0423195846, -0.1570488065, 0.0340129584, 0.0988311544, 0.0375577137, 0.0017086314, 0.0513819456, -0.0049629742, -0.1156943440, -0.1017633006, -0.1380380690, 0.1615598351, 0.2407505512, 0.1665953398, 0.1564142555, 0.2203114033, 0.1511881799, -0.0899365395, -0.0667438358, -0.1098496392, 0.0129030216, 0.0759588331, 0.0156279504, 0.0000544555, 0.0486797579, -0.0079669766, -0.1253398061, -0.1120763123, -0.1491330862, 0.3542209268, 0.4370323718, 0.4087753892, 0.2786655724, 0.3227508962, 0.3144910932, 0.3017235398, 0.3510136902, 0.3445102572, 0.0978009403, 0.0967388451, 0.0991673693, -0.3623670042, -0.4246644676, -0.3944213390, -0.0460787490, -0.0889540538, -0.0617709160, -0.0009707115, -0.0481492020, -0.0274197720, -0.4031734467, -0.5154169798, -0.4682248235, -0.1468185037, -0.2351084650, -0.1928505898, -0.0865836963, -0.1098514572, -0.0820337012, 0.1908439249, 0.2399978787, 0.2509654760, 0.1684218347, 0.2385243177, 0.2305979729, -0.1864694655, -0.2339965105, -0.1814273149, 0.1760879904, 0.2058644891, 0.2437983602, 0.1542661488, 0.2103555351, 0.2282740027, -0.2396383286, -0.3368902206, -0.2779019475, -0.1415990889, -0.1771954447, -0.1176737249, -0.1026690677, -0.1095481887, -0.0681315586, 0.2296829522, -0.1923770308, -0.0482807644, 0.2394039184, -0.2236396819, -0.0860508829, 0.2324352115, -0.1873732060, -0.0434580185, 0.2514076829, -0.2103483677, -0.0716413110, 0.2676666081, -0.2360930741, -0.1032722667, 0.2372588068, -0.2216556817, -0.0824363455, 0.2251492441, -0.1926404387, -0.0458678640, 0.2598269582, -0.1974260211, -0.0562276803, 0.2204554677, -0.1942717731, -0.0460685454, 0.0668324158, 0.0978973731, 0.0656183809, -0.1120720059, -0.1255841255, -0.1469613761, -0.1665147692, -0.2091384530, -0.2119099796, 0.1472194940, 0.2007411569, 0.1555169970, -0.0526724681, -0.0431273729, -0.0757858902, -0.1556234956, -0.1797573566, -0.1915159672, 0.1520244330, 0.2289568484, 0.1838657856, 0.0982329026, 0.1414922178, 0.1043865085, 0.0073981509, 0.0203322694, 0.0040651932, 0.0413383804, 0.0793518871, 0.1179972813, 0.1165771633, 0.2128092051, 0.2552989721, 0.1031201333, 0.2347206622, 0.2633985281, -0.2125911415, -0.2332896739, -0.1680400819, -0.1490524411, -0.1072740853, -0.0351117030, 0.0382502601, 0.1338555515, 0.1859073788, -0.2132176012, -0.2824255824, -0.2212522924, -0.1856718659, -0.1988622397, -0.1285695434, -0.0016349395, 0.0420177393, 0.0933472142, 0.1302678436, -0.2751773894, 0.1642768383, 0.0958600938, -0.3185304999, 0.1692876816, 0.1263650656, -0.2746180594, 0.1692830324, 0.1113600954, -0.2931763232, 0.1965684444, 0.0772164986, -0.3355482519, 0.2045755237, 0.0990585014, -0.3003767729, 0.1932100207, 0.1063513234, -0.2816410363, 0.1717491746, 0.1134313047, -0.2805063725, 0.2199066877, 0.0944238901, -0.2882097363, 0.1690363288, 0.0329103470, -0.1423288286, -0.1597871631, -0.0526647307, -0.2511458099, -0.2796970606, 0.0159041267, -0.1609538645, -0.1798284203, 0.1529514790, -0.0156457294, -0.0563814081, 0.0979724899, -0.0918593705, -0.1447423398, 0.1491515487, -0.0207418278, -0.0629037023, 0.2316397578, 0.1051821560, 0.0681652501, 0.2426000237, 0.0984755233, 0.0472991541, 0.2288013697, 0.1014813855, 0.0633433536, 0.0961545706, 0.1732318848, 0.1461363882, 0.5002132654, 0.6085159183, 0.5649865270, 0.0459891558, 0.1134035513, 0.0993647799, 0.0038497467, 0.0120651731, 0.0030455540, 0.4898677468, 0.5282950401, 0.5055311918, -0.0415886380, -0.0431188755, -0.0382008366, -0.3829957545, -0.4891839623, -0.4531463683, -0.3134400547, -0.4067220092, -0.3662037551, -0.3867048621, -0.5010918975, -0.4536136687, -0.0922253206, 0.0410316885, -0.0903612897, 0.1043855771, 0.2948101461, 0.1332866699, 0.0421199463, 0.2450225055, 0.0877168775, -0.1598356217, -0.0523567908, -0.1883185655, 0.0875689238, 0.2544562817, 0.0885766149, 0.0387755893, 0.2227331251, 0.0601595603, -0.2249463350, -0.1646961123, -0.2761163414, -0.1523233950, -0.0449110419, -0.1798762381, -0.1174378097, 0.0107738422, -0.1222678050, -0.1558733135, 0.2924944162, -0.2190301567, -0.1443147361, 0.3477832377, -0.1974355429, -0.1478051096, 0.3074393570, -0.2097055316, -0.1412080824, 0.3578591943, -0.1885952204, -0.1061407253, 0.4376699924, -0.1446205527, -0.1237573400, 0.3793944716, -0.1737062335, -0.1713939756, 0.3006941676, -0.2127603441, -0.1589555293, 0.3541895747, -0.1930892766, -0.1582718194, 0.3138560057, -0.2063363492, 0.0522967987, 0.0162965637, -0.1261754781, -0.0137801236, -0.0786353722, -0.2263990194, -0.1116071194, -0.1874600649, -0.3050855696, 0.2031583190, 0.1776573062, 0.0042411140, 0.1718772948, 0.1184450686, -0.0601502173, -0.0197016075, -0.0880144089, -0.2321610153, 0.2018460482, 0.2003238350, 0.0381320342, 0.1977674216, 0.1722266972, 0.0029858260, 0.0426386483, 0.0034550633, -0.1317321509, -0.0832441747, -0.1260721385, -0.0993737653, -0.3812089562, -0.4590236545, -0.4171073735, -0.0558534861, -0.0858032480, -0.0617119335, -0.0433545001, -0.0494737402, -0.0308400188, -0.3992913067, -0.4369103909, -0.4041810930, 0.0117621832, 0.0221790820, 0.0351811610, 0.2290171832, 0.3093866706, 0.2978825569, 0.1587562859, 0.2245709002, 0.2219209373, 0.2634942234, 0.3581429124, 0.3406893015, 0.1572876871, -0.1555536687, 0.1604929715, 0.1396581531, -0.1929288059, 0.1508458704, 0.1296532005, -0.1891002506, 0.1262574643, 0.1008399203, -0.2362152040, 0.1018543839, 0.0290120393, -0.3298392892, 0.0375170559, 0.0891952813, -0.2515018880, 0.0843275115, 0.1238475814, -0.2019040138, 0.1039431021, 0.1043328866, -0.2396266758, 0.0928537399, 0.1297702044, -0.1967656761, 0.1056040600, 0.0291195959, -0.0531723350, 0.1887065470, -0.0329543278, -0.1048691794, 0.1812156439, 0.0360857993, -0.0547288097, 0.1778012663, -0.0447309427, -0.0941526219, 0.2317228168, -0.1121062413, -0.1486258060, 0.2256188989, -0.0349869356, -0.0915573686, 0.2251818329, -0.0429164991, -0.0990901664, 0.2136228830, -0.0818860233, -0.1228810400, 0.2378501743, -0.0352495946, -0.0960973501, 0.2084648609, 0.0509483516, 0.1812971681, 0.0934753865, 0.0837437212, 0.1983959675, 0.1100588441, -0.0932614729, -0.0254678875, -0.0896054879, 0.0711323991, 0.1923366934, 0.0987698957, 0.1039194539, 0.2063557506, 0.1128154621, -0.1452948153, -0.0930082351, -0.1609456986, -0.0831292570, -0.0007545006, -0.0728550702, -0.0971623659, -0.0350016095, -0.1068184152, -0.1834850311, -0.1618941724, -0.2148984075, 0.1905574799, -0.2077192962, 0.0749733895, 0.1666761637, -0.2581610382, 0.0418386832, 0.1990657449, -0.1953251064, 0.0904483646, 0.2015547007, -0.2183585614, 0.0782376602, 0.1117823198, -0.3354418874, -0.0197668355, 0.2112566382, -0.2032065541, 0.0955962166, 0.1931038499, -0.1997870654, 0.0857388601, 0.1474638432, -0.2700071037, 0.0331895687, 0.1907404661, -0.1960900128, 0.0917757154, -0.0437222868, -0.1389461905, 0.1263243854, -0.1041601971, -0.1913561225, 0.1277190000, -0.0471277125, -0.1454276890, 0.1158875972, -0.0847202912, -0.1463543624, 0.1935982555, -0.1557895988, -0.2070494443, 0.1901340038, -0.0905470252, -0.1536884457, 0.1827310324, -0.0627764463, -0.1226741225, 0.1817630976, -0.1014745757, -0.1474891752, 0.2113053650, -0.0712402165, -0.1309737414, 0.1702291816, 0.3618031144, 0.2553910613, 0.2384991944, 0.3084963262, 0.1567780823, 0.1415727437, 0.1405620277, -0.0201128796, -0.0056697582, 0.2756039202, 0.1205441579, 0.1005703285, 0.0905414894, -0.1179588139, -0.1311032027, -0.0763713941, -0.2941154838, -0.2779288888, 0.1349776089, -0.0301995203, -0.0256843269, -0.0256014206, -0.2436154336, -0.2336378694, -0.1416313052, -0.3646470308, -0.3294883668, 0.2390287369, 0.3563148975, 0.3559717834, 0.3098752797, 0.3799369037, 0.3978872895, 0.0647362098, 0.0571688004, 0.0864696875, 0.0900689811, 0.1479089260, 0.1822998226, -0.0761016682, -0.0845413879, -0.0252854265, -0.2557088733, -0.3428176641, -0.2792322636, -0.0007114823, -0.0109227877, 0.0350416526, -0.2055636495, -0.2858699560, -0.2169242799, -0.2500581741, -0.3958670199, -0.3310964108, 0.1666719168, 0.0011849799, -0.1204613894, 0.1709780097, -0.0259418879, -0.1709014177, 0.1687200963, 0.0015104716, -0.1240490824, 0.1790933758, -0.0190957338, -0.1637211889, 0.1793487519, -0.0516258217, -0.2193298340, 0.1702480912, -0.0303710066, -0.1779115796, 0.1605341136, -0.0095782438, -0.1339444816, 0.1914428025, -0.0104213674, -0.1572813243, 0.1688060462, -0.0037875092, -0.1307814866, -0.1804674566, -0.4870278537, -0.3083382547, -0.1172449961, -0.4095134735, -0.2379050106, 0.1814876944, -0.0431569032, 0.1084554046, -0.0799025521, -0.3758065999, -0.2036207616, -0.0003499495, -0.2769973278, -0.1171758547, 0.3401753306, 0.1303945631, 0.2664444149, 0.1844948381, -0.0481424779, 0.1070574000, 0.2775389254, 0.0629161298, 0.2036277056, 0.4048333466, 0.2437456101, 0.3688125908, 0.0440482050, 0.1153379157, -0.0208339561, 0.0096633267, 0.0670143664, -0.0715501606, -0.0459219366, -0.0024683545, -0.1222829372, 0.0745168626, 0.1472519338, -0.0005186872, 0.0274561942, 0.0850401297, -0.0643960834, -0.0588815287, -0.0169696845, -0.1463713199, 0.0402549244, 0.1146399602, -0.0219452400, 0.0152034611, 0.0758564398, -0.0631413385, -0.0459916182, 0.0003517131, -0.1196834743, 0.0959283710, 0.1163794026, -0.1587263197, 0.1246803775, 0.1394466609, -0.1631912142, 0.1017406136, 0.1263617575, -0.1524069458, 0.1223266870, 0.1373677850, -0.1673070639, 0.1527856737, 0.1612567455, -0.1725112349, 0.1296373457, 0.1473744959, -0.1610997468, 0.0793799087, 0.1052459925, -0.1737980247, 0.1153221130, 0.1336345226, -0.1733830571, 0.0854483321, 0.1122990772, -0.1706547290, -0.0438113064, -0.0770884380, -0.0714943707, -0.3910299838, -0.4950309992, -0.4693558514, -0.2856496572, -0.4157187045, -0.3880535662, 0.1856817305, 0.2412553579, 0.2279501259, -0.1042130962, -0.1092135236, -0.1006786376, -0.0881287754, -0.1295700371, -0.1153527945, 0.2720740139, 0.4086301923, 0.3745784760, 0.2490170002, 0.3455264270, 0.3248080313, 0.1742136776, 0.2321774513, 0.2214500755, -0.1884835064, 0.1036870182, -0.0504345298, -0.1779273748, 0.1741675287, 0.0272796545, -0.1829255670, 0.1398683935, -0.0055489480, -0.1848164648, 0.1441353112, -0.0048843916, -0.1289440840, 0.2645012140, 0.1219940484, -0.1701785326, 0.1905421913, 0.0508904681, -0.1933977902, 0.0836378708, -0.0653001741, -0.1858864725, 0.1481931359, 0.0071100006, -0.1913325489, 0.1133359000, -0.0264096614, -0.0439950228, -0.0718570054, -0.0338394381, -0.0368775949, -0.0227502156, -0.0018767728, 0.2808884680, 0.3872913122, 0.3688015938, -0.3459624052, -0.4224752784, -0.3702472448, -0.4329025745, -0.4650588334, -0.4307661653, 0.2049563676, 0.2850344181, 0.2739439607, -0.0676356778, -0.1035225093, -0.0685893223, -0.0785235465, -0.0719793364, -0.0553761013, 0.2407414466, 0.3392624259, 0.3168292344, -0.1898544580, -0.0038847709, 0.2195698768, -0.1763369292, 0.0226958580, 0.2708940506, -0.1605074555, -0.0290257912, 0.1451757550, -0.1938433796, -0.0142122926, 0.2281847298, -0.1783620417, 0.0121491915, 0.2789039016, -0.1708871424, -0.0476722531, 0.1435719579, -0.1591357291, -0.0659068450, 0.1013307571, -0.1845575124, -0.0842410773, 0.1054241210, -0.1244296655, -0.0799596608, 0.0361547731, -0.2338698208, -0.2635082901, -0.2920665741, -0.1678102165, -0.1656797230, -0.2153353542, -0.0985076800, -0.0720966905, -0.1231272444, -0.1091269106, -0.0988568291, -0.1505028754, 0.1696789265, 0.2213829011, 0.1403454542, 0.1314065307, 0.2024245262, 0.1220353916, -0.0403339416, 0.0026714592, -0.0502232574, 0.1801023036, 0.2615135014, 0.1796113253, 0.1198751032, 0.2153977305, 0.1372867227, 0.1283674389, 0.1244735345, 0.1489370316, 0.0856419653, 0.0952550545, 0.1303644478, 0.1213698462, 0.1114125103, 0.1341509819, 0.1106616333, 0.1166921332, 0.1417180300, -0.0145823024, 0.0053503462, 0.0421879813, 0.1110120788, 0.1101897582, 0.1331134886, 0.1597361118, 0.1421298087, 0.1527944356, 0.0949554071, 0.0902951434, 0.1115221530, 0.1539761722, 0.1291242093, 0.1375354528, -0.1105997488, -0.0746256039, 0.0132619515, -0.1236757040, -0.0783106536, 0.0329272598, -0.1069154143, -0.0712787062, 0.0189347882, -0.0924182013, -0.0474971496, 0.0595952980, -0.0634728074, -0.0072766910, 0.1232255995, -0.1060182601, -0.0613196008, 0.0479140207, -0.1028336361, -0.0725192353, 0.0108909262, -0.1017903537, -0.0605912544, 0.0448981002, -0.1075691879, -0.0764832944, 0.0081611685, 0.0057133608, -0.1561216265, -0.0050338814, -0.0181761980, -0.1975281835, -0.0374878608, -0.1219024360, -0.3102581203, -0.1491150111, 0.1931212246, 0.0403459668, 0.1842132062, 0.2835115790, 0.1154838502, 0.2653895319, -0.0215079561, -0.2031974047, -0.0423344895, 0.1167215854, -0.0244378392, 0.1191076860, 0.2060637325, 0.0519780032, 0.1985415220, -0.0089832619, -0.1743802130, -0.0194161944, -0.2447965592, -0.2900034785, -0.2700734437, -0.2626171112, -0.3222234249, -0.3039813340, -0.3364256918, -0.4274839461, -0.3985455632, 0.0955411494, 0.1272460669, 0.1147200540, 0.3739976287, 0.4015850723, 0.3781111836, -0.0873369649, -0.1068377793, -0.1035379320, 0.0935268700, 0.1673064232, 0.1493689865, 0.3652215600, 0.4392768741, 0.4072680175, -0.0030894796, 0.0267152078, 0.0233304277, -0.3053028286, -0.4322603941, -0.4032290280, -0.1675350368, -0.2067362517, -0.1946140677, 0.0339720920, 0.0758071691, 0.0670514852, -0.2414291054, -0.3239961267, -0.3044950962, 0.1422892809, 0.1632965505, 0.1543347687, 0.3441539407, 0.4444851279, 0.4091997147, -0.1046187133, -0.1445073634, -0.1379705071, 0.0973473936, 0.1488397866, 0.1304845810, 0.1861083359, 0.3031472266, 0.2657096088, 0.0609379970, 0.0506316163, -0.1716402173, 0.0691427067, 0.0408999696, -0.2038518637, 0.0601495430, 0.0520107076, -0.1730671227, 0.0731860846, 0.0416843630, -0.2030790001, 0.0891655385, 0.0388939120, -0.2284930199, 0.0741780549, 0.0443667136, -0.2027483582, 0.0618723109, 0.0492637046, -0.1741366088, 0.0753613859, 0.0450038463, -0.1997777224, 0.0665422678, 0.0547382645, -0.1702858806, -0.3281625211, -0.4310325682, -0.3688976765, -0.2798519433, -0.3500370085, -0.2837174237, -0.2961009145, -0.3622413576, -0.2971870005, -0.0996494219, -0.1204575226, -0.0874576122, 0.3341161013, 0.3619246781, 0.3809504211, 0.0045363684, 0.0233462155, 0.0526927151, 0.0445810929, 0.0761803165, 0.0753673762, 0.4595420063, 0.5394686460, 0.5184412003, 0.1346316338, 0.2017283738, 0.1960553527, 0.1711952984, 0.2944418788, 0.1308150291, 0.2166976482, 0.3292107284, 0.1545960754, 0.0564939007, 0.1504170597, -0.0013317744, 0.0164465327, 0.1012034640, -0.0625233650, 0.0042948457, 0.0738054886, -0.0986046866, -0.0840767920, -0.0311172325, -0.1831715107, -0.0888792425, -0.0373491682, -0.1701096296, -0.1293698698, -0.0956979990, -0.2358452529, -0.1339456439, -0.1111302599, -0.2345452458, 0.1026540697, -0.1099368185, -0.0358881988, 0.0459548645, -0.1975869536, -0.1199039742, 0.0906770825, -0.1253806800, -0.0464379750, 0.1212029606, -0.1133713350, -0.0419705436, 0.0188636966, -0.2488569170, -0.1732626706, 0.1011311188, -0.1363357455, -0.0596652068, 0.1022345275, -0.1041396037, -0.0325863883, 0.0486027598, -0.1864401102, -0.1110562608, 0.0803435817, -0.1279258579, -0.0512077063, -0.1106366515, 0.0662343353, -0.1062630340, -0.1124355569, 0.0658502579, -0.1145269796, -0.1556864530, -0.0040107043, -0.1637266278, -0.0183543935, 0.1944942772, -0.0012317569, 0.0244153328, 0.2402347922, 0.0356260836, -0.1044741496, 0.0785037056, -0.1028168350, -0.0409011096, 0.1733282804, -0.0139788222, -0.0162801556, 0.2011715323, 0.0052539157, -0.1067619249, 0.0789442360, -0.0949083865, 0.3301298618, 0.1802959889, 0.2913699150, 0.3589265347, 0.2034000903, 0.3116725087, 0.3961602747, 0.2834282219, 0.3773377240, -0.0044680531, -0.2318728417, -0.0971558020, -0.1693360209, -0.4073868096, -0.2702648342, 0.2175637186, 0.0389690883, 0.1526127607, -0.1140312552, -0.3657121658, -0.2228932530, -0.2858760357, -0.5517544746, -0.4046269059, 0.0860797614, -0.1161641851, 0.0076805465, -0.0586972833, -0.0704995841, -0.0631071255, 0.1377515793, 0.1689756960, 0.1504441798, 0.2214365751, 0.2853753567, 0.2526080310, -0.1902237684, -0.2305677682, -0.2185994983, 0.0199450254, 0.0252011139, 0.0130341314, 0.1951127797, 0.2406567335, 0.2111672461, -0.1914363652, -0.2497161329, -0.2297989428, -0.1291253120, -0.1526401341, -0.1492554694, 0.0004742289, 0.0155887157, 0.0059482120, 0.1847871691, 0.3077178895, 0.2863599658, 0.1829613298, 0.2983718812, 0.2782406807, 0.2132265270, 0.3412728906, 0.3084218800, -0.0646763146, -0.0318222530, -0.0225602072, -0.3317251205, -0.3225606680, -0.3070448637, -0.0142033221, 0.0263870042, 0.0245076064, -0.1101583242, -0.1437518746, -0.1194000393, -0.3799861670, -0.4436411560, -0.4120164216, -0.0894798487, -0.1167650223, -0.1029866487, 0.0105085261, 0.0966970101, -0.0425485559, -0.0551802665, 0.0046764677, -0.1326308548, -0.1762651950, -0.1504111737, -0.2563208342, 0.1709570736, 0.2796587050, 0.1169132888, 0.1387554854, 0.2214724422, 0.0613770373, -0.1332870424, -0.0914772451, -0.2148749530, 0.0685702264, 0.1836314201, 0.0355472639, 0.0575270206, 0.1493918151, 0.0014074194, -0.1147185415, -0.0594068617, -0.1741981208, 0.1066802666, 0.0988399908, 0.1034524068, 0.2862330973, 0.3562432230, 0.3304644525, 0.4251088798, 0.5751096606, 0.5129421353, -0.3770940602, -0.4805825949, -0.4412902594, -0.2457187176, -0.2649278939, -0.2506802678, 0.3071674705, 0.3975630999, 0.3641121387, -0.3406924605, -0.4860551953, -0.4379433393, -0.2955890298, -0.3680560887, -0.3383439779, 0.1322558820, 0.1674351692, 0.1564364135, -0.1308692396, -0.0672688857, -0.0284832176, -0.1867422014, -0.1353004724, -0.0760079473, -0.2535081506, -0.2585172057, -0.2016689181, 0.0535440668, 0.1865154207, 0.2255143523, 0.1172726601, 0.2437649369, 0.3020026088, -0.1799431592, -0.1249884740, -0.0601307862, -0.0171319097, 0.1158854142, 0.1437910348, 0.0450552292, 0.1752865613, 0.2198213339, -0.1453244537, -0.0806387812, -0.0316429213, -0.3628394604, -0.4840570986, -0.4513990283, -0.3824826181, -0.4655955434, -0.4435786903, -0.0734804273, -0.0907742083, -0.0871764496, -0.1852473170, -0.2357276380, -0.2216237187, -0.0081452020, -0.0049458342, -0.0111840693, 0.2102579325, 0.2698228359, 0.2437120080, 0.1151078716, 0.1539322585, 0.1430386901, 0.3445644677, 0.4359357059, 0.3987700045, 0.3259329200, 0.4548580050, 0.4070746303, 0.0644080713, 0.1675654352, 0.1961855441, -0.1036278680, -0.0924774930, -0.0369976610, -0.2615458965, -0.3579697013, -0.3017280698, 0.1619785875, 0.3080600500, 0.3406183720, -0.0299310964, 0.0213681739, 0.0839938372, -0.3303160071, -0.3985922337, -0.3306905329, 0.0778414086, 0.2346632481, 0.2559932172, 0.0564207211, 0.1366451085, 0.1803334951, -0.1102757677, -0.1347723305, -0.0877605826, 0.0933597162, -0.0552446060, -0.0897931457, 0.2618361712, 0.1347690076, 0.0586711690, 0.3967326880, 0.3332492411, 0.2532348335, -0.1616343856, -0.3648397326, -0.4039940834, 0.0231066477, -0.1552438587, -0.2361428589, 0.3381733596, 0.2335161567, 0.1430685073, -0.1369408071, -0.3312481642, -0.3502948582, 0.0148149990, -0.1596312970, -0.2169850320, 0.2291176617, 0.1248741075, 0.0608755350, 0.0040161926, 0.1256603450, -0.1511108726, 0.0103108706, 0.1345243752, -0.1620975882, 0.0041167471, 0.1326268464, -0.1467701793, 0.0206385013, 0.1389416456, -0.1582987309, 0.0423107333, 0.1626341492, -0.1548602879, 0.0215735007, 0.1455026716, -0.1542896479, 0.0049801408, 0.1246602759, -0.1543055326, 0.0161965080, 0.1367453784, -0.1613808125, 0.0104908813, 0.1337274313, -0.1471530795, 0.3781480491, 0.5004009604, 0.4637004733, 0.1499582380, 0.1579325199, 0.1660209447, -0.0993825570, -0.1884540319, -0.1467430890, 0.3329566121, 0.4249097705, 0.3981654346, -0.2206038684, -0.2662535608, -0.2406489402, -0.5187025666, -0.6714000702, -0.6122331023, 0.2709422112, 0.3585452735, 0.3276858628, -0.0117181307, -0.0449670255, -0.0320339911, -0.2230982780, -0.3505727351, -0.3088085949, 0.0526880398, -0.0744272694, 0.1269945502, 0.0254054330, -0.0775721967, 0.1689354479, 0.0882033035, 0.0152011551, 0.2380355150, -0.0801997706, -0.2330912799, -0.0012276294, -0.1504589617, -0.2780182362, 0.0006923916, 0.0414873622, -0.0459912717, 0.2050859928, 0.0019665067, -0.1568956375, 0.0357718803, -0.0474085957, -0.1826964319, 0.0541123189, 0.0564493537, -0.0425656363, 0.1696556658, -0.2707893550, -0.3387221992, -0.2739747167, -0.3147825599, -0.3294896185, -0.2633101940, -0.0056281295, 0.0388309024, 0.0689496398, -0.1588778347, -0.1435205042, -0.0712103248, -0.1357803643, -0.0569121465, 0.0128826099, 0.1416687220, 0.2726642191, 0.3038432002, -0.0054092752, 0.0719730631, 0.1226958185, 0.0315883271, 0.1700783372, 0.2177333683, 0.1114842966, 0.2829235792, 0.2999361455, 0.1106074080, -0.0261301082, 0.0451747254, -0.1441736668, -0.3327987194, -0.2454974949, -0.1684634686, -0.3677302003, -0.2731899321, 0.2534840107, 0.1350036860, 0.1959461272, -0.0342523716, -0.2032859176, -0.1234089285, -0.0812317953, -0.2648653388, -0.1749052405, 0.3268590271, 0.2475265861, 0.3006266654, 0.2357619405, 0.1174991429, 0.1832553446, 0.1541246474, 0.0221105684, 0.0999696925, -0.1181952581, -0.0735273808, -0.2384933382, -0.0471791252, 0.0208353326, -0.1749757528, 0.0560752414, 0.1531522423, -0.0420844108, -0.0987838954, -0.0432924628, -0.2277587205, 0.0139012812, 0.0952897295, -0.1224665791, 0.1431932002, 0.2535879910, 0.0350056551, -0.0345173553, 0.0417840295, -0.1337806880, 0.0509751029, 0.1501993239, -0.0573729165, 0.1231419221, 0.2464699447, 0.0402998440, 0.0429893471, -0.1153368577, 0.0091230562, 0.0985405147, -0.0404662266, 0.0872102976, 0.2294105291, 0.1296699494, 0.2326551378, -0.1269569546, -0.3090784550, -0.1649529040, -0.1036492661, -0.2643312514, -0.1155151948, 0.1854551584, 0.0723028705, 0.1917491853, -0.0157835074, -0.1830520630, -0.0525783673, 0.0042427364, -0.1447328180, -0.0086747147, 0.1589388847, 0.0513972640, 0.1629665047, 0.3532362282, 0.1706310809, 0.2996780872, 0.1175650433, -0.1331666708, 0.0239003152, 0.0205497947, -0.2494487762, -0.0835123584, 0.2988668084, 0.0927076265, 0.2304537594, -0.1286825985, -0.4121894538, -0.2419699878, -0.1866525263, -0.4897637069, -0.3111724257, 0.3250291049, 0.1467603296, 0.2757353485, 0.1295209378, -0.1137050837, 0.0411275662, 0.0538637713, -0.2056377381, -0.0433028750, -0.2846816182, -0.3675265312, -0.3199889660, -0.0444047265, -0.0409343056, -0.0289746299, 0.1119105667, 0.1735897958, 0.1508526057, -0.2859653234, -0.3621386588, -0.3170245290, 0.2735227644, 0.2975775003, 0.2931761444, 0.4445581734, 0.5295403004, 0.4862476885, -0.3009948134, -0.3918991089, -0.3538680375, -0.0233768374, -0.0274247322, -0.0238770470, 0.1176775917, 0.1710465699, 0.1433401257, -0.2028900832, 0.1333956867, 0.0872597471, -0.2448074520, 0.1433036029, 0.1251065284, -0.1933893412, 0.1338454932, 0.0855238587, -0.2468853742, 0.1601772308, 0.1498627216, -0.2867432535, 0.1760162115, 0.1949108690, -0.2361043245, 0.1620034128, 0.1498510540, -0.2139302492, 0.1420144737, 0.1121767163, -0.2557737231, 0.1540390849, 0.1537735164, -0.2060686797, 0.1418388635, 0.1102816686, -0.2849439979, -0.3668954372, -0.3384837210, -0.1810345352, -0.2032087296, -0.2018994242, 0.0196314529, 0.0520836115, 0.0333640985, -0.2290017903, -0.2759482563, -0.2603491247, 0.1421494782, 0.1685435623, 0.1441642940, 0.3693289757, 0.4491522908, 0.3995231986, -0.1624463052, -0.1820621341, -0.1712105274, 0.0796652064, 0.1252149493, 0.1010794938, 0.2095255107, 0.2997477949, 0.2568973005, -0.1322415769, -0.0848205537, -0.1271355599, -0.1482071280, -0.0988498852, -0.1223605722, -0.1401583701, -0.0943124294, -0.1294045597, -0.1143161580, -0.0693419054, -0.0988388434, -0.0520089604, -0.0037897995, -0.0140649760, -0.1459454596, -0.1035024151, -0.1256886125, -0.1414493918, -0.1050172523, -0.1497427225, -0.1227286831, -0.0829023942, -0.1097800881, -0.1530922949, -0.1183060557, -0.1568398029, -0.0533475243, -0.0511389151, -0.0502991639, -0.2353006601, -0.2961957455, -0.2764503956, -0.3776668012, -0.5056625605, -0.4622437954, 0.3654945195, 0.4371168613, 0.4040585458, 0.2571490109, 0.2694124281, 0.2593008280, -0.2718235552, -0.3457923532, -0.3140263259, 0.2410996407, 0.3395501971, 0.3068019152, 0.2446874529, 0.2954660952, 0.2792037427, -0.1399173290, -0.1670580208, -0.1428743005, 0.0075773839, 0.0374943428, 0.0348965675, -0.0630356818, -0.0704357103, -0.0390796512, -0.3005098701, -0.3836943209, -0.3239852786, 0.3399389982, 0.4131714404, 0.3925611973, 0.3716826737, 0.4095059037, 0.4237644672, -0.2397181839, -0.2924862504, -0.2328397632, 0.0455602147, 0.0986374393, 0.0882701725, 0.0532913655, 0.0744469985, 0.0946525261, -0.2650752366, -0.3222419620, -0.2696946263};
#endif

#endif
