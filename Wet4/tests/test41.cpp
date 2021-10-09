#include "aux_macro.h"
#include "../malloc_2.cpp"
#include <iostream>

void printStats()
                    {
                        std::cout << "_num_free_blocks: " << _num_free_blocks() << std::endl;
                        std::cout << "_num_free_bytes: " << _num_free_bytes() << std::endl;
                        std::cout << "_num_allocated_blocks: " << _num_allocated_blocks() << std::endl;
                        std::cout << "_num_allocated_bytes: " << _num_allocated_bytes() << std::endl;
                        std::cout << "_num_meta_data_bytes: " << _num_meta_data_bytes() << std::endl;
                        std::cout << "_size_meta_data: " << _size_meta_data() << std::endl;
                    }
                    int main()
                    {
                        PRINT_POINTER(smalloc(6););
printStats();
void* p0 = last_address;
PRINT_POINTER(scalloc(156,36););
printStats();
void* p1 = last_address;
PRINT_POINTER(scalloc(194,78););
printStats();
void* p2 = last_address;
PRINT_POINTER(smalloc(21););
printStats();
void* p3 = last_address;
PRINT_POINTER(srealloc(p1,224););
printStats();
void* p4 = last_address;
DEBUG_PRINT(sfree(p3););
printStats();
PRINT_POINTER(srealloc(p2,67););
printStats();
void* p5 = last_address;
PRINT_POINTER(srealloc(p4,140););
printStats();
void* p6 = last_address;
PRINT_POINTER(scalloc(209,83););
printStats();
void* p7 = last_address;
DEBUG_PRINT(sfree(p6););
printStats();
PRINT_POINTER(scalloc(94,90););
printStats();
void* p8 = last_address;
PRINT_POINTER(srealloc(p0,38););
printStats();
void* p9 = last_address;
PRINT_POINTER(smalloc(149););
printStats();
void* p10 = last_address;
PRINT_POINTER(smalloc(67););
printStats();
void* p11 = last_address;
PRINT_POINTER(srealloc(p8,106););
printStats();
void* p12 = last_address;
PRINT_POINTER(scalloc(117,226););
printStats();
void* p13 = last_address;
PRINT_POINTER(scalloc(84,117););
printStats();
void* p14 = last_address;
PRINT_POINTER(srealloc(p9,106););
printStats();
void* p15 = last_address;
PRINT_POINTER(scalloc(150,228););
printStats();
void* p16 = last_address;
PRINT_POINTER(scalloc(162,167););
printStats();
void* p17 = last_address;
PRINT_POINTER(srealloc(p15,46););
printStats();
void* p18 = last_address;
DEBUG_PRINT(sfree(p14););
printStats();
PRINT_POINTER(srealloc(p18,99););
printStats();
void* p19 = last_address;
DEBUG_PRINT(sfree(p13););
printStats();
DEBUG_PRINT(sfree(p12););
printStats();
PRINT_POINTER(scalloc(75,167););
printStats();
void* p20 = last_address;
PRINT_POINTER(scalloc(221,59););
printStats();
void* p21 = last_address;
DEBUG_PRINT(sfree(p5););
printStats();
DEBUG_PRINT(sfree(p19););
printStats();
PRINT_POINTER(smalloc(124););
printStats();
void* p22 = last_address;
DEBUG_PRINT(sfree(p16););
printStats();
PRINT_POINTER(smalloc(17););
printStats();
void* p23 = last_address;
DEBUG_PRINT(sfree(p22););
printStats();
PRINT_POINTER(srealloc(p21,125););
printStats();
void* p24 = last_address;
PRINT_POINTER(scalloc(233,100););
printStats();
void* p25 = last_address;
PRINT_POINTER(smalloc(180););
printStats();
void* p26 = last_address;
PRINT_POINTER(srealloc(p25,131););
printStats();
void* p27 = last_address;
PRINT_POINTER(smalloc(238););
printStats();
void* p28 = last_address;
PRINT_POINTER(srealloc(p17,242););
printStats();
void* p29 = last_address;
PRINT_POINTER(scalloc(12,188););
printStats();
void* p30 = last_address;
PRINT_POINTER(smalloc(178););
printStats();
void* p31 = last_address;
PRINT_POINTER(srealloc(p24,136););
printStats();
void* p32 = last_address;
DEBUG_PRINT(sfree(p7););
printStats();
PRINT_POINTER(srealloc(p29,27););
printStats();
void* p33 = last_address;
PRINT_POINTER(scalloc(82,207););
printStats();
void* p34 = last_address;
PRINT_POINTER(srealloc(p20,227););
printStats();
void* p35 = last_address;
PRINT_POINTER(smalloc(0););
printStats();
void* p36 = last_address;
DEBUG_PRINT(sfree(p27););
printStats();
PRINT_POINTER(scalloc(73,40););
printStats();
void* p37 = last_address;
PRINT_POINTER(srealloc(p37,144););
printStats();
void* p38 = last_address;
DEBUG_PRINT(sfree(p34););
printStats();
PRINT_POINTER(scalloc(31,223););
printStats();
void* p39 = last_address;
PRINT_POINTER(smalloc(45););
printStats();
void* p40 = last_address;
PRINT_POINTER(scalloc(194,10););
printStats();
void* p41 = last_address;
PRINT_POINTER(smalloc(74););
printStats();
void* p42 = last_address;
DEBUG_PRINT(sfree(p38););
printStats();
DEBUG_PRINT(sfree(p39););
printStats();
PRINT_POINTER(scalloc(153,115););
printStats();
void* p43 = last_address;
PRINT_POINTER(srealloc(p36,140););
printStats();
void* p44 = last_address;
DEBUG_PRINT(sfree(p41););
printStats();
PRINT_POINTER(smalloc(241););
printStats();
void* p45 = last_address;
PRINT_POINTER(srealloc(p40,121););
printStats();
void* p46 = last_address;
DEBUG_PRINT(sfree(p33););
printStats();
PRINT_POINTER(smalloc(128););
printStats();
void* p47 = last_address;
DEBUG_PRINT(sfree(p46););
printStats();
PRINT_POINTER(scalloc(62,140););
printStats();
void* p48 = last_address;
PRINT_POINTER(smalloc(47););
printStats();
void* p49 = last_address;
PRINT_POINTER(smalloc(129););
printStats();
void* p50 = last_address;
PRINT_POINTER(srealloc(p23,220););
printStats();
void* p51 = last_address;
DEBUG_PRINT(sfree(p10););
printStats();
PRINT_POINTER(smalloc(109););
printStats();
void* p52 = last_address;
PRINT_POINTER(srealloc(p51,137););
printStats();
void* p53 = last_address;
PRINT_POINTER(smalloc(109););
printStats();
void* p54 = last_address;
DEBUG_PRINT(sfree(p31););
printStats();
DEBUG_PRINT(sfree(p47););
printStats();
DEBUG_PRINT(sfree(p53););
printStats();
PRINT_POINTER(srealloc(p43,207););
printStats();
void* p55 = last_address;
DEBUG_PRINT(sfree(p44););
printStats();
DEBUG_PRINT(sfree(p52););
printStats();
DEBUG_PRINT(sfree(p50););
printStats();
PRINT_POINTER(srealloc(p42,209););
printStats();
void* p56 = last_address;
PRINT_POINTER(scalloc(68,96););
printStats();
void* p57 = last_address;
PRINT_POINTER(smalloc(206););
printStats();
void* p58 = last_address;
PRINT_POINTER(srealloc(p57,79););
printStats();
void* p59 = last_address;
DEBUG_PRINT(sfree(p45););
printStats();
PRINT_POINTER(smalloc(245););
printStats();
void* p60 = last_address;
DEBUG_PRINT(sfree(p11););
printStats();
PRINT_POINTER(smalloc(18););
printStats();
void* p61 = last_address;
PRINT_POINTER(smalloc(162););
printStats();
void* p62 = last_address;
PRINT_POINTER(scalloc(160,158););
printStats();
void* p63 = last_address;
PRINT_POINTER(scalloc(166,163););
printStats();
void* p64 = last_address;
PRINT_POINTER(srealloc(p61,164););
printStats();
void* p65 = last_address;
PRINT_POINTER(smalloc(22););
printStats();
void* p66 = last_address;
PRINT_POINTER(smalloc(61););
printStats();
void* p67 = last_address;
DEBUG_PRINT(sfree(p67););
printStats();
PRINT_POINTER(smalloc(38););
printStats();
void* p68 = last_address;
DEBUG_PRINT(sfree(p28););
printStats();
PRINT_POINTER(srealloc(p56,83););
printStats();
void* p69 = last_address;
PRINT_POINTER(srealloc(p60,0););
printStats();
void* p70 = last_address;
PRINT_POINTER(smalloc(62););
printStats();
void* p71 = last_address;
DEBUG_PRINT(sfree(p26););
printStats();
PRINT_POINTER(scalloc(192,178););
printStats();
void* p72 = last_address;
DEBUG_PRINT(sfree(p35););
printStats();
PRINT_POINTER(scalloc(217,51););
printStats();
void* p73 = last_address;
PRINT_POINTER(smalloc(152););
printStats();
void* p74 = last_address;
PRINT_POINTER(srealloc(p63,13););
printStats();
void* p75 = last_address;
DEBUG_PRINT(sfree(p73););
printStats();
PRINT_POINTER(smalloc(217););
printStats();
void* p76 = last_address;
PRINT_POINTER(scalloc(107,248););
printStats();
void* p77 = last_address;
DEBUG_PRINT(sfree(p74););
printStats();
PRINT_POINTER(scalloc(5,95););
printStats();
void* p78 = last_address;
PRINT_POINTER(smalloc(7););
printStats();
void* p79 = last_address;
DEBUG_PRINT(sfree(p30););
printStats();
PRINT_POINTER(scalloc(160,100););
printStats();
void* p80 = last_address;
DEBUG_PRINT(sfree(p75););
printStats();
PRINT_POINTER(smalloc(59););
printStats();
void* p81 = last_address;
PRINT_POINTER(scalloc(37,24););
printStats();
void* p82 = last_address;
PRINT_POINTER(srealloc(p49,211););
printStats();
void* p83 = last_address;
PRINT_POINTER(smalloc(42););
printStats();
void* p84 = last_address;
PRINT_POINTER(scalloc(52,99););
printStats();
void* p85 = last_address;
PRINT_POINTER(scalloc(203,95););
printStats();
void* p86 = last_address;
PRINT_POINTER(smalloc(193););
printStats();
void* p87 = last_address;
DEBUG_PRINT(sfree(p84););
printStats();
PRINT_POINTER(smalloc(160););
printStats();
void* p88 = last_address;
PRINT_POINTER(scalloc(172,129););
printStats();
void* p89 = last_address;
DEBUG_PRINT(sfree(p62););
printStats();
DEBUG_PRINT(sfree(p58););
printStats();
DEBUG_PRINT(sfree(p89););
printStats();
PRINT_POINTER(scalloc(163,77););
printStats();
void* p90 = last_address;
DEBUG_PRINT(sfree(p79););
printStats();
DEBUG_PRINT(sfree(p81););
printStats();
PRINT_POINTER(smalloc(219););
printStats();
void* p91 = last_address;
DEBUG_PRINT(sfree(p32););
printStats();
DEBUG_PRINT(sfree(p59););
printStats();
PRINT_POINTER(srealloc(p64,201););
printStats();
void* p92 = last_address;
PRINT_POINTER(srealloc(p55,160););
printStats();
void* p93 = last_address;
PRINT_POINTER(smalloc(217););
printStats();
void* p94 = last_address;
PRINT_POINTER(srealloc(p94,146););
printStats();
void* p95 = last_address;
PRINT_POINTER(srealloc(p88,171););
printStats();
void* p96 = last_address;
PRINT_POINTER(srealloc(p66,80););
printStats();
void* p97 = last_address;
PRINT_POINTER(smalloc(165););
printStats();
void* p98 = last_address;
PRINT_POINTER(smalloc(50););
printStats();
void* p99 = last_address;
DEBUG_PRINT(sfree(p85););
printStats();
PRINT_POINTER(smalloc(150););
printStats();
void* p100 = last_address;
PRINT_POINTER(smalloc(133););
printStats();
void* p101 = last_address;
PRINT_POINTER(scalloc(154,235););
printStats();
void* p102 = last_address;
DEBUG_PRINT(sfree(p68););
printStats();
DEBUG_PRINT(sfree(p76););
printStats();
DEBUG_PRINT(sfree(p78););
printStats();
PRINT_POINTER(smalloc(146););
printStats();
void* p103 = last_address;
DEBUG_PRINT(sfree(p91););
printStats();
PRINT_POINTER(srealloc(p65,185););
printStats();
void* p104 = last_address;
PRINT_POINTER(srealloc(p98,63););
printStats();
void* p105 = last_address;
DEBUG_PRINT(sfree(p71););
printStats();
PRINT_POINTER(smalloc(1););
printStats();
void* p106 = last_address;
PRINT_POINTER(srealloc(p99,90););
printStats();
void* p107 = last_address;
PRINT_POINTER(srealloc(p106,176););
printStats();
void* p108 = last_address;
PRINT_POINTER(srealloc(p100,10););
printStats();
void* p109 = last_address;
DEBUG_PRINT(sfree(p69););
printStats();
PRINT_POINTER(srealloc(p82,161););
printStats();
void* p110 = last_address;
PRINT_POINTER(smalloc(113););
printStats();
void* p111 = last_address;
PRINT_POINTER(srealloc(p95,173););
printStats();
void* p112 = last_address;
PRINT_POINTER(scalloc(0,184););
printStats();
void* p113 = last_address;
PRINT_POINTER(scalloc(29,146););
printStats();
void* p114 = last_address;
PRINT_POINTER(smalloc(62););
printStats();
void* p115 = last_address;
DEBUG_PRINT(sfree(p92););
printStats();
PRINT_POINTER(scalloc(74,92););
printStats();
void* p116 = last_address;
PRINT_POINTER(scalloc(153,96););
printStats();
void* p117 = last_address;
PRINT_POINTER(scalloc(192,72););
printStats();
void* p118 = last_address;
PRINT_POINTER(scalloc(72,182););
printStats();
void* p119 = last_address;
PRINT_POINTER(scalloc(135,211););
printStats();
void* p120 = last_address;
PRINT_POINTER(scalloc(225,211););
printStats();
void* p121 = last_address;
PRINT_POINTER(smalloc(164););
printStats();
void* p122 = last_address;
PRINT_POINTER(scalloc(142,90););
printStats();
void* p123 = last_address;
PRINT_POINTER(scalloc(199,0););
printStats();
void* p124 = last_address;
DEBUG_PRINT(sfree(p96););
printStats();
PRINT_POINTER(smalloc(242););
printStats();
void* p125 = last_address;
DEBUG_PRINT(sfree(p105););
printStats();
PRINT_POINTER(srealloc(p101,173););
printStats();
void* p126 = last_address;
PRINT_POINTER(srealloc(p117,105););
printStats();
void* p127 = last_address;
PRINT_POINTER(srealloc(p90,178););
printStats();
void* p128 = last_address;
PRINT_POINTER(srealloc(p104,38););
printStats();
void* p129 = last_address;
PRINT_POINTER(scalloc(138,143););
printStats();
void* p130 = last_address;
PRINT_POINTER(smalloc(133););
printStats();
void* p131 = last_address;
PRINT_POINTER(srealloc(p120,65););
printStats();
void* p132 = last_address;
PRINT_POINTER(smalloc(58););
printStats();
void* p133 = last_address;
PRINT_POINTER(smalloc(194););
printStats();
void* p134 = last_address;
DEBUG_PRINT(sfree(p131););
printStats();
PRINT_POINTER(srealloc(p118,141););
printStats();
void* p135 = last_address;
DEBUG_PRINT(sfree(p113););
printStats();
PRINT_POINTER(scalloc(125,208););
printStats();
void* p136 = last_address;
PRINT_POINTER(smalloc(18););
printStats();
void* p137 = last_address;
DEBUG_PRINT(sfree(p86););
printStats();
PRINT_POINTER(srealloc(p114,51););
printStats();
void* p138 = last_address;
DEBUG_PRINT(sfree(p136););
printStats();
PRINT_POINTER(srealloc(p83,52););
printStats();
void* p139 = last_address;
PRINT_POINTER(smalloc(60););
printStats();
void* p140 = last_address;
PRINT_POINTER(scalloc(155,193););
printStats();
void* p141 = last_address;
PRINT_POINTER(srealloc(p107,145););
printStats();
void* p142 = last_address;
PRINT_POINTER(scalloc(122,64););
printStats();
void* p143 = last_address;
DEBUG_PRINT(sfree(p132););
printStats();
DEBUG_PRINT(sfree(p139););
printStats();
PRINT_POINTER(smalloc(173););
printStats();
void* p144 = last_address;
PRINT_POINTER(srealloc(p87,17););
printStats();
void* p145 = last_address;
PRINT_POINTER(srealloc(p125,136););
printStats();
void* p146 = last_address;
PRINT_POINTER(srealloc(p111,88););
printStats();
void* p147 = last_address;
DEBUG_PRINT(sfree(p97););
printStats();
PRINT_POINTER(smalloc(78););
printStats();
void* p148 = last_address;
PRINT_POINTER(scalloc(127,150););
printStats();
void* p149 = last_address;
PRINT_POINTER(srealloc(p143,71););
printStats();
void* p150 = last_address;
PRINT_POINTER(smalloc(236););
printStats();
void* p151 = last_address;
PRINT_POINTER(smalloc(240););
printStats();
void* p152 = last_address;
PRINT_POINTER(smalloc(229););
printStats();
void* p153 = last_address;
PRINT_POINTER(srealloc(p128,204););
printStats();
void* p154 = last_address;
DEBUG_PRINT(sfree(p124););
printStats();
DEBUG_PRINT(sfree(p134););
printStats();
PRINT_POINTER(smalloc(36););
printStats();
void* p155 = last_address;
PRINT_POINTER(smalloc(106););
printStats();
void* p156 = last_address;
PRINT_POINTER(smalloc(139););
printStats();
void* p157 = last_address;
PRINT_POINTER(scalloc(173,231););
printStats();
void* p158 = last_address;
PRINT_POINTER(scalloc(105,144););
printStats();
void* p159 = last_address;
PRINT_POINTER(smalloc(132););
printStats();
void* p160 = last_address;
DEBUG_PRINT(sfree(p108););
printStats();
PRINT_POINTER(srealloc(p119,0););
printStats();
void* p161 = last_address;
DEBUG_PRINT(sfree(p142););
printStats();
DEBUG_PRINT(sfree(p150););
printStats();
PRINT_POINTER(srealloc(p103,9););
printStats();
void* p162 = last_address;
PRINT_POINTER(srealloc(p54,7););
printStats();
void* p163 = last_address;
PRINT_POINTER(srealloc(p129,224););
printStats();
void* p164 = last_address;
PRINT_POINTER(smalloc(153););
printStats();
void* p165 = last_address;
DEBUG_PRINT(sfree(p109););
printStats();
PRINT_POINTER(smalloc(21););
printStats();
void* p166 = last_address;
PRINT_POINTER(scalloc(41,90););
printStats();
void* p167 = last_address;
PRINT_POINTER(srealloc(p121,166););
printStats();
void* p168 = last_address;
DEBUG_PRINT(sfree(p135););
printStats();
DEBUG_PRINT(sfree(p137););
printStats();
PRINT_POINTER(srealloc(p126,18););
printStats();
void* p169 = last_address;
PRINT_POINTER(srealloc(p144,221););
printStats();
void* p170 = last_address;
DEBUG_PRINT(sfree(p130););
printStats();
PRINT_POINTER(scalloc(176,56););
printStats();
void* p171 = last_address;
PRINT_POINTER(smalloc(206););
printStats();
void* p172 = last_address;
PRINT_POINTER(scalloc(166,61););
printStats();
void* p173 = last_address;
DEBUG_PRINT(sfree(p152););
printStats();
PRINT_POINTER(scalloc(116,164););
printStats();
void* p174 = last_address;
DEBUG_PRINT(sfree(p102););
printStats();
PRINT_POINTER(srealloc(p166,208););
printStats();
void* p175 = last_address;
PRINT_POINTER(srealloc(p48,147););
printStats();
void* p176 = last_address;
PRINT_POINTER(smalloc(179););
printStats();
void* p177 = last_address;
DEBUG_PRINT(sfree(p80););
printStats();
PRINT_POINTER(scalloc(121,178););
printStats();
void* p178 = last_address;
PRINT_POINTER(srealloc(p169,111););
printStats();
void* p179 = last_address;
PRINT_POINTER(smalloc(159););
printStats();
void* p180 = last_address;
PRINT_POINTER(srealloc(p170,90););
printStats();
void* p181 = last_address;
DEBUG_PRINT(sfree(p149););
printStats();
PRINT_POINTER(scalloc(227,230););
printStats();
void* p182 = last_address;
PRINT_POINTER(smalloc(199););
printStats();
void* p183 = last_address;
PRINT_POINTER(scalloc(229,121););
printStats();
void* p184 = last_address;
PRINT_POINTER(srealloc(p171,44););
printStats();
void* p185 = last_address;
PRINT_POINTER(scalloc(201,154););
printStats();
void* p186 = last_address;
PRINT_POINTER(scalloc(240,185););
printStats();
void* p187 = last_address;
PRINT_POINTER(scalloc(246,101););
printStats();
void* p188 = last_address;
DEBUG_PRINT(sfree(p157););
printStats();
DEBUG_PRINT(sfree(p186););
printStats();
PRINT_POINTER(srealloc(p110,19););
printStats();
void* p189 = last_address;
PRINT_POINTER(smalloc(207););
printStats();
void* p190 = last_address;
PRINT_POINTER(smalloc(11););
printStats();
void* p191 = last_address;
DEBUG_PRINT(sfree(p180););
printStats();
PRINT_POINTER(scalloc(123,178););
printStats();
void* p192 = last_address;
PRINT_POINTER(smalloc(145););
printStats();
void* p193 = last_address;
PRINT_POINTER(scalloc(112,224););
printStats();
void* p194 = last_address;
PRINT_POINTER(srealloc(p172,188););
printStats();
void* p195 = last_address;
PRINT_POINTER(srealloc(p133,244););
printStats();
void* p196 = last_address;
DEBUG_PRINT(sfree(p195););
printStats();
PRINT_POINTER(srealloc(p184,113););
printStats();
void* p197 = last_address;
PRINT_POINTER(scalloc(113,109););
printStats();
void* p198 = last_address;
DEBUG_PRINT(sfree(p196););
printStats();
DEBUG_PRINT(sfree(p154););
printStats();
PRINT_POINTER(srealloc(p138,170););
printStats();
void* p199 = last_address;
PRINT_POINTER(srealloc(p175,171););
printStats();
void* p200 = last_address;
PRINT_POINTER(scalloc(154,102););
printStats();
void* p201 = last_address;
PRINT_POINTER(smalloc(137););
printStats();
void* p202 = last_address;
DEBUG_PRINT(sfree(p123););
printStats();
PRINT_POINTER(smalloc(134););
printStats();
void* p203 = last_address;
PRINT_POINTER(srealloc(p159,216););
printStats();
void* p204 = last_address;
PRINT_POINTER(smalloc(104););
printStats();
void* p205 = last_address;
PRINT_POINTER(scalloc(26,62););
printStats();
void* p206 = last_address;
PRINT_POINTER(scalloc(38,79););
printStats();
void* p207 = last_address;
PRINT_POINTER(srealloc(p162,85););
printStats();
void* p208 = last_address;
DEBUG_PRINT(sfree(p183););
printStats();
DEBUG_PRINT(sfree(p122););
printStats();
PRINT_POINTER(smalloc(142););
printStats();
void* p209 = last_address;
PRINT_POINTER(scalloc(54,235););
printStats();
void* p210 = last_address;
DEBUG_PRINT(sfree(p93););
printStats();
PRINT_POINTER(smalloc(144););
printStats();
void* p211 = last_address;
PRINT_POINTER(srealloc(p193,104););
printStats();
void* p212 = last_address;
DEBUG_PRINT(sfree(p189););
printStats();
PRINT_POINTER(scalloc(208,237););
printStats();
void* p213 = last_address;
PRINT_POINTER(smalloc(249););
printStats();
void* p214 = last_address;
PRINT_POINTER(srealloc(p181,230););
printStats();
void* p215 = last_address;
PRINT_POINTER(srealloc(p212,104););
printStats();
void* p216 = last_address;
PRINT_POINTER(srealloc(p158,23););
printStats();
void* p217 = last_address;
PRINT_POINTER(smalloc(68););
printStats();
void* p218 = last_address;
PRINT_POINTER(scalloc(124,195););
printStats();
void* p219 = last_address;
PRINT_POINTER(srealloc(p217,116););
printStats();
void* p220 = last_address;
PRINT_POINTER(scalloc(72,110););
printStats();
void* p221 = last_address;
DEBUG_PRINT(sfree(p141););
printStats();
PRINT_POINTER(scalloc(217,134););
printStats();
void* p222 = last_address;
PRINT_POINTER(srealloc(p211,85););
printStats();
void* p223 = last_address;
PRINT_POINTER(srealloc(p147,141););
printStats();
void* p224 = last_address;
PRINT_POINTER(scalloc(226,157););
printStats();
void* p225 = last_address;
PRINT_POINTER(smalloc(143););
printStats();
void* p226 = last_address;
PRINT_POINTER(scalloc(240,77););
printStats();
void* p227 = last_address;
DEBUG_PRINT(sfree(p182););
printStats();
PRINT_POINTER(srealloc(p226,32););
printStats();
void* p228 = last_address;
PRINT_POINTER(scalloc(29,51););
printStats();
void* p229 = last_address;
PRINT_POINTER(srealloc(p115,171););
printStats();
void* p230 = last_address;
DEBUG_PRINT(sfree(p198););
printStats();
PRINT_POINTER(srealloc(p202,31););
printStats();
void* p231 = last_address;
PRINT_POINTER(srealloc(p163,13););
printStats();
void* p232 = last_address;
PRINT_POINTER(smalloc(99););
printStats();
void* p233 = last_address;
PRINT_POINTER(srealloc(p151,153););
printStats();
void* p234 = last_address;
DEBUG_PRINT(sfree(p188););
printStats();
DEBUG_PRINT(sfree(p201););
printStats();
DEBUG_PRINT(sfree(p218););
printStats();
PRINT_POINTER(smalloc(165););
printStats();
void* p235 = last_address;
PRINT_POINTER(srealloc(p234,122););
printStats();
void* p236 = last_address;
PRINT_POINTER(smalloc(43););
printStats();
void* p237 = last_address;
PRINT_POINTER(smalloc(38););
printStats();
void* p238 = last_address;
PRINT_POINTER(srealloc(p187,84););
printStats();
void* p239 = last_address;
PRINT_POINTER(smalloc(66););
printStats();
void* p240 = last_address;
DEBUG_PRINT(sfree(p161););
printStats();
PRINT_POINTER(smalloc(183););
printStats();
void* p241 = last_address;
PRINT_POINTER(scalloc(126,112););
printStats();
void* p242 = last_address;
PRINT_POINTER(scalloc(58,222););
printStats();
void* p243 = last_address;
DEBUG_PRINT(sfree(p165););
printStats();
PRINT_POINTER(scalloc(20,13););
printStats();
void* p244 = last_address;
PRINT_POINTER(srealloc(p197,142););
printStats();
void* p245 = last_address;
PRINT_POINTER(scalloc(223,228););
printStats();
void* p246 = last_address;
PRINT_POINTER(smalloc(111););
printStats();
void* p247 = last_address;
PRINT_POINTER(srealloc(p155,152););
printStats();
void* p248 = last_address;
DEBUG_PRINT(sfree(p200););
printStats();
PRINT_POINTER(smalloc(121););
printStats();
void* p249 = last_address;
PRINT_POINTER(srealloc(p116,89););
printStats();
void* p250 = last_address;
DEBUG_PRINT(sfree(p222););
printStats();
PRINT_POINTER(srealloc(p204,36););
printStats();
void* p251 = last_address;
PRINT_POINTER(scalloc(89,73););
printStats();
void* p252 = last_address;
DEBUG_PRINT(sfree(p206););
printStats();
PRINT_POINTER(srealloc(p127,64););
printStats();
void* p253 = last_address;
PRINT_POINTER(srealloc(p146,30););
printStats();
void* p254 = last_address;
PRINT_POINTER(scalloc(37,212););
printStats();
void* p255 = last_address;
DEBUG_PRINT(sfree(p191););
printStats();
PRINT_POINTER(scalloc(244,194););
printStats();
void* p256 = last_address;
PRINT_POINTER(scalloc(141,170););
printStats();
void* p257 = last_address;
PRINT_POINTER(srealloc(p77,51););
printStats();
void* p258 = last_address;
PRINT_POINTER(srealloc(p178,212););
printStats();
void* p259 = last_address;
DEBUG_PRINT(sfree(p209););
printStats();
PRINT_POINTER(scalloc(89,70););
printStats();
void* p260 = last_address;
PRINT_POINTER(scalloc(79,245););
printStats();
void* p261 = last_address;
PRINT_POINTER(srealloc(p145,148););
printStats();
void* p262 = last_address;
DEBUG_PRINT(sfree(p227););
printStats();
DEBUG_PRINT(sfree(p255););
printStats();
DEBUG_PRINT(sfree(p199););
printStats();
PRINT_POINTER(srealloc(p207,200););
printStats();
void* p263 = last_address;
PRINT_POINTER(smalloc(10););
printStats();
void* p264 = last_address;
PRINT_POINTER(srealloc(p239,229););
printStats();
void* p265 = last_address;
DEBUG_PRINT(sfree(p233););
printStats();
PRINT_POINTER(srealloc(p251,63););
printStats();
void* p266 = last_address;
PRINT_POINTER(srealloc(p243,92););
printStats();
void* p267 = last_address;
PRINT_POINTER(smalloc(96););
printStats();
void* p268 = last_address;
PRINT_POINTER(scalloc(155,190););
printStats();
void* p269 = last_address;
PRINT_POINTER(smalloc(219););
printStats();
void* p270 = last_address;
PRINT_POINTER(srealloc(p70,178););
printStats();
void* p271 = last_address;
PRINT_POINTER(scalloc(95,236););
printStats();
void* p272 = last_address;
DEBUG_PRINT(sfree(p246););
printStats();
DEBUG_PRINT(sfree(p249););
printStats();
PRINT_POINTER(srealloc(p235,103););
printStats();
void* p273 = last_address;
PRINT_POINTER(scalloc(197,207););
printStats();
void* p274 = last_address;
DEBUG_PRINT(sfree(p262););
printStats();
PRINT_POINTER(scalloc(73,173););
printStats();
void* p275 = last_address;
PRINT_POINTER(srealloc(p176,86););
printStats();
void* p276 = last_address;
PRINT_POINTER(scalloc(228,115););
printStats();
void* p277 = last_address;
PRINT_POINTER(scalloc(130,136););
printStats();
void* p278 = last_address;
PRINT_POINTER(smalloc(132););
printStats();
void* p279 = last_address;
PRINT_POINTER(scalloc(114,67););
printStats();
void* p280 = last_address;
PRINT_POINTER(smalloc(82););
printStats();
void* p281 = last_address;
PRINT_POINTER(scalloc(64,243););
printStats();
void* p282 = last_address;
PRINT_POINTER(smalloc(229););
printStats();
void* p283 = last_address;
DEBUG_PRINT(sfree(p167););
printStats();
PRINT_POINTER(srealloc(p164,66););
printStats();
void* p284 = last_address;
DEBUG_PRINT(sfree(p230););
printStats();
PRINT_POINTER(srealloc(p241,198););
printStats();
void* p285 = last_address;
PRINT_POINTER(scalloc(220,46););
printStats();
void* p286 = last_address;
DEBUG_PRINT(sfree(p274););
printStats();
PRINT_POINTER(scalloc(217,116););
printStats();
void* p287 = last_address;
PRINT_POINTER(scalloc(152,35););
printStats();
void* p288 = last_address;
PRINT_POINTER(smalloc(113););
printStats();
void* p289 = last_address;
PRINT_POINTER(smalloc(19););
printStats();
void* p290 = last_address;
DEBUG_PRINT(sfree(p190););
printStats();
PRINT_POINTER(srealloc(p245,144););
printStats();
void* p291 = last_address;
PRINT_POINTER(srealloc(p242,56););
printStats();
void* p292 = last_address;
DEBUG_PRINT(sfree(p290););
printStats();
PRINT_POINTER(smalloc(210););
printStats();
void* p293 = last_address;
PRINT_POINTER(scalloc(162,132););
printStats();
void* p294 = last_address;
DEBUG_PRINT(sfree(p291););
printStats();
PRINT_POINTER(smalloc(111););
printStats();
void* p295 = last_address;
PRINT_POINTER(smalloc(148););
printStats();
void* p296 = last_address;
PRINT_POINTER(scalloc(121,53););
printStats();
void* p297 = last_address;
DEBUG_PRINT(sfree(p231););
printStats();
DEBUG_PRINT(sfree(p250););
printStats();
PRINT_POINTER(scalloc(194,133););
printStats();
void* p298 = last_address;
PRINT_POINTER(srealloc(p219,2););
printStats();
void* p299 = last_address;
PRINT_POINTER(scalloc(189,170););
printStats();
void* p300 = last_address;
PRINT_POINTER(smalloc(232););
printStats();
void* p301 = last_address;
PRINT_POINTER(smalloc(212););
printStats();
void* p302 = last_address;
PRINT_POINTER(srealloc(p240,205););
printStats();
void* p303 = last_address;
DEBUG_PRINT(sfree(p260););
printStats();
PRINT_POINTER(srealloc(p286,238););
printStats();
void* p304 = last_address;
PRINT_POINTER(srealloc(p194,52););
printStats();
void* p305 = last_address;
PRINT_POINTER(smalloc(1););
printStats();
void* p306 = last_address;
PRINT_POINTER(scalloc(170,171););
printStats();
void* p307 = last_address;
PRINT_POINTER(srealloc(p264,46););
printStats();
void* p308 = last_address;
DEBUG_PRINT(sfree(p307););
printStats();
DEBUG_PRINT(sfree(p308););
printStats();
PRINT_POINTER(scalloc(101,138););
printStats();
void* p309 = last_address;
PRINT_POINTER(scalloc(85,192););
printStats();
void* p310 = last_address;
PRINT_POINTER(smalloc(226););
printStats();
void* p311 = last_address;
PRINT_POINTER(smalloc(56););
printStats();
void* p312 = last_address;
PRINT_POINTER(scalloc(234,215););
printStats();
void* p313 = last_address;
PRINT_POINTER(srealloc(p256,107););
printStats();
void* p314 = last_address;
DEBUG_PRINT(sfree(p312););
printStats();
PRINT_POINTER(srealloc(p287,149););
printStats();
void* p315 = last_address;
PRINT_POINTER(scalloc(163,69););
printStats();
void* p316 = last_address;
PRINT_POINTER(srealloc(p276,18););
printStats();
void* p317 = last_address;
PRINT_POINTER(smalloc(129););
printStats();
void* p318 = last_address;
PRINT_POINTER(srealloc(p254,217););
printStats();
void* p319 = last_address;
DEBUG_PRINT(sfree(p252););
printStats();
PRINT_POINTER(scalloc(89,243););
printStats();
void* p320 = last_address;
PRINT_POINTER(smalloc(118););
printStats();
void* p321 = last_address;
PRINT_POINTER(smalloc(130););
printStats();
void* p322 = last_address;
PRINT_POINTER(scalloc(25,195););
printStats();
void* p323 = last_address;
PRINT_POINTER(srealloc(p273,204););
printStats();
void* p324 = last_address;
PRINT_POINTER(smalloc(19););
printStats();
void* p325 = last_address;
PRINT_POINTER(smalloc(84););
printStats();
void* p326 = last_address;
DEBUG_PRINT(sfree(p263););
printStats();
PRINT_POINTER(smalloc(99););
printStats();
void* p327 = last_address;
PRINT_POINTER(smalloc(188););
printStats();
void* p328 = last_address;
PRINT_POINTER(scalloc(198,179););
printStats();
void* p329 = last_address;
PRINT_POINTER(srealloc(p153,96););
printStats();
void* p330 = last_address;
PRINT_POINTER(scalloc(197,122););
printStats();
void* p331 = last_address;
PRINT_POINTER(smalloc(112););
printStats();
void* p332 = last_address;
PRINT_POINTER(scalloc(22,114););
printStats();
void* p333 = last_address;
PRINT_POINTER(srealloc(p277,87););
printStats();
void* p334 = last_address;
PRINT_POINTER(smalloc(81););
printStats();
void* p335 = last_address;
PRINT_POINTER(smalloc(218););
printStats();
void* p336 = last_address;
PRINT_POINTER(srealloc(p334,201););
printStats();
void* p337 = last_address;
PRINT_POINTER(smalloc(19););
printStats();
void* p338 = last_address;
PRINT_POINTER(scalloc(101,156););
printStats();
void* p339 = last_address;
PRINT_POINTER(scalloc(214,4););
printStats();
void* p340 = last_address;
PRINT_POINTER(scalloc(151,174););
printStats();
void* p341 = last_address;
PRINT_POINTER(scalloc(188,122););
printStats();
void* p342 = last_address;
PRINT_POINTER(scalloc(221,184););
printStats();
void* p343 = last_address;
DEBUG_PRINT(sfree(p210););
printStats();
PRINT_POINTER(srealloc(p265,186););
printStats();
void* p344 = last_address;
DEBUG_PRINT(sfree(p304););
printStats();
PRINT_POINTER(srealloc(p247,24););
printStats();
void* p345 = last_address;
DEBUG_PRINT(sfree(p173););
printStats();
DEBUG_PRINT(sfree(p332););
printStats();
PRINT_POINTER(srealloc(p325,228););
printStats();
void* p346 = last_address;
PRINT_POINTER(srealloc(p343,244););
printStats();
void* p347 = last_address;
DEBUG_PRINT(sfree(p214););
printStats();
PRINT_POINTER(smalloc(47););
printStats();
void* p348 = last_address;
PRINT_POINTER(scalloc(247,121););
printStats();
void* p349 = last_address;
DEBUG_PRINT(sfree(p223););
printStats();
PRINT_POINTER(srealloc(p333,184););
printStats();
void* p350 = last_address;
PRINT_POINTER(scalloc(121,220););
printStats();
void* p351 = last_address;
PRINT_POINTER(scalloc(117,108););
printStats();
void* p352 = last_address;
PRINT_POINTER(scalloc(22,189););
printStats();
void* p353 = last_address;
PRINT_POINTER(srealloc(p259,81););
printStats();
void* p354 = last_address;
PRINT_POINTER(smalloc(236););
printStats();
void* p355 = last_address;
PRINT_POINTER(scalloc(180,13););
printStats();
void* p356 = last_address;
PRINT_POINTER(srealloc(p338,211););
printStats();
void* p357 = last_address;
PRINT_POINTER(srealloc(p348,194););
printStats();
void* p358 = last_address;
DEBUG_PRINT(sfree(p179););
printStats();
PRINT_POINTER(scalloc(234,188););
printStats();
void* p359 = last_address;
PRINT_POINTER(srealloc(p347,129););
printStats();
void* p360 = last_address;
PRINT_POINTER(srealloc(p237,19););
printStats();
void* p361 = last_address;
PRINT_POINTER(srealloc(p280,249););
printStats();
void* p362 = last_address;
PRINT_POINTER(smalloc(86););
printStats();
void* p363 = last_address;
PRINT_POINTER(scalloc(82,219););
printStats();
void* p364 = last_address;
PRINT_POINTER(smalloc(66););
printStats();
void* p365 = last_address;
DEBUG_PRINT(sfree(p329););
printStats();
PRINT_POINTER(smalloc(121););
printStats();
void* p366 = last_address;
PRINT_POINTER(srealloc(p336,176););
printStats();
void* p367 = last_address;
PRINT_POINTER(srealloc(p357,3););
printStats();
void* p368 = last_address;
PRINT_POINTER(smalloc(132););
printStats();
void* p369 = last_address;
PRINT_POINTER(srealloc(p168,95););
printStats();
void* p370 = last_address;
PRINT_POINTER(smalloc(124););
printStats();
void* p371 = last_address;
PRINT_POINTER(srealloc(p314,215););
printStats();
void* p372 = last_address;
PRINT_POINTER(smalloc(187););
printStats();
void* p373 = last_address;
PRINT_POINTER(smalloc(240););
printStats();
void* p374 = last_address;
PRINT_POINTER(scalloc(1,181););
printStats();
void* p375 = last_address;
DEBUG_PRINT(sfree(p261););
printStats();
PRINT_POINTER(scalloc(128,158););
printStats();
void* p376 = last_address;
PRINT_POINTER(srealloc(p305,243););
printStats();
void* p377 = last_address;
PRINT_POINTER(scalloc(40,112););
printStats();
void* p378 = last_address;
PRINT_POINTER(smalloc(186););
printStats();
void* p379 = last_address;
PRINT_POINTER(smalloc(234););
printStats();
void* p380 = last_address;
PRINT_POINTER(srealloc(p248,213););
printStats();
void* p381 = last_address;
PRINT_POINTER(smalloc(172););
printStats();
void* p382 = last_address;
DEBUG_PRINT(sfree(p356););
printStats();
PRINT_POINTER(smalloc(244););
printStats();
void* p383 = last_address;
DEBUG_PRINT(sfree(p272););
printStats();
PRINT_POINTER(scalloc(22,25););
printStats();
void* p384 = last_address;
PRINT_POINTER(srealloc(p232,43););
printStats();
void* p385 = last_address;
PRINT_POINTER(srealloc(p156,205););
printStats();
void* p386 = last_address;
PRINT_POINTER(scalloc(136,125););
printStats();
void* p387 = last_address;
PRINT_POINTER(srealloc(p369,47););
printStats();
void* p388 = last_address;
PRINT_POINTER(smalloc(7););
printStats();
void* p389 = last_address;
DEBUG_PRINT(sfree(p174););
printStats();
PRINT_POINTER(scalloc(209,169););
printStats();
void* p390 = last_address;
PRINT_POINTER(smalloc(22););
printStats();
void* p391 = last_address;
DEBUG_PRINT(sfree(p216););
printStats();
PRINT_POINTER(smalloc(78););
printStats();
void* p392 = last_address;
DEBUG_PRINT(sfree(p213););
printStats();
}