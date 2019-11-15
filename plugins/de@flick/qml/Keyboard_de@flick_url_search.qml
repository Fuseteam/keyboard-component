/*
 * Copyright 2015 Canonical Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

import QtQuick 2.4
import keys 1.0

KeyPad {
    anchors.fill:parent;
    content: c1

    Column {
        id: c1 
	property int keyHeight: panel.keyHeight-panel.keyHeight*0.1;
    	anchors.fill:parent;
	spacing: 0
    Row {
            anchors.horizontalCenter: parent.horizontalCenter;
            spacing: 0
	    CaseSwitchKey { id: layout; } 
            FlickCharKey {
                label: layout.state == "caps" ? "L:P" : "l:p";
                leaves: layout.state == "caps" ? ["E", "L", ":", "P", "1"] : ["e", "l", ":", "p", "1"];
                annotation: layout.state == "caps" ? "E1" : "e1";
            }
            FlickCharKey {
                label: layout.state == "caps" ? "G$V" : "g$v";
                leaves: layout.state == "caps" ? ["N", "G", "$", "V", "2"] : ["n", "g", "$", "v", "2"];
                annotation: layout.state == "caps" ? "N2" : "n2";
            }
            FlickCharKey {
                label: layout.state == "caps" ? "M#Ü" : "m#ü";
                leaves: layout.state == "caps" ? ["I", "M", "#", "Ü", "3"] : ["i", "m", "#", "ü", "3"];
                annotation: layout.state == "caps" ? "I3" : "i3";
            }
            BackspaceKey { rightSide: true; width: panel.keyWidth; height: layout.height;}
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter;
            spacing: 0

            CursorKey { leftSide:true; }
            FlickCharKey {
                label: layout.state == "caps" ? "C'Ä" : "c'ä";
                leaves: layout.state == "caps" ? ["R", "C", "'", "Ä", "4"] : ["r", "c", "'", "ä", "4"];
                annotation: layout.state == "caps" ? "R4" : "r4";
            }
            FlickCharKey {
                label: layout.state == "caps" ? "O^J" : "o^j";
                leaves: layout.state == "caps" ? ["T", "O", "^", "J", "5"] : ["t", "o", "^", "j", "5"];
                annotation: layout.state == "caps" ? "T5" : "t5";
            }
            FlickCharKey {
                label: layout.state == "caps" ? "B\"Ö" : "b\"ö";
                leaves: layout.state == "caps" ? ["S", "B", "\"", "Ö", "6"] : ["s", "b", "\"", "ö", "6"];
                annotation: layout.state == "caps" ? "S6" : "s6";
            }
            CursorKey { rightSide:true; }
        }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter;
            spacing: 0
           
            FlickCharKey {
                label: layout.state == "caps" ? "`_" : "`_"
                leaves: layout.state == "caps" ? ["=", "", "`", "_", "|"] : ["=", "", "`", "_", "|"]
                annotation: layout.state == "caps" ? "=|" : "=|"
            }
	     FlickCharKey {
                label: layout.state == "caps" ? "F\\ß" : "f\\ß";
                leaves: layout.state == "caps" ? ["A", "F", "\\", "ß", "7"] : ["a", "f", "\\", "ß", "7"];
                annotation: layout.state == "caps" ? "A7" : "a7";
            }
            FlickCharKey {
                label: layout.state == "caps" ? "K * Y" : "k * y";
                leaves: layout.state == "caps" ? ["D", "K", "*", "Y", "8"] : ["d", "k", "*", "y", "8"];
                annotation: layout.state == "caps" ? "D8" : "d8";
            }
            FlickCharKey {
                label: layout.state == "caps" ? "W/X" : "w/x";
                leaves: layout.state == "caps" ? ["H", "W", "/", "X", "9"] : ["h", "w", "/", "x", "9"];
                annotation: layout.state == "caps" ? "H9" : "h9";
            }
           FlickCharKey {
                label: layout.state == "caps" ? "&amp;!" : "&amp;!"
                leaves: layout.state == "caps" ? ["@", "&", "!", "", "~"] : ["@", "&", "!", "", "~"]
                annotation: layout.state == "caps" ? "@~" : "@~"
            }
	 }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter;
            spacing: 0

            LanguageKey    { id: languageMenuButton; height: layout.height; }
            FlickCharKey {
   		 label: layout.state == "caps" ? "&lt; - >" : "( - )";
   		 leaves: layout.state == "caps" ?  [",", "<", "-", ">", "+"]: [",", "(", "-", ")", "+"];
		 annotation: layout.state == "caps" ?  ",+" : ",+";
	    }
	    FlickCharKey {
                label: layout.state == "caps" ? "Z % Q" : "z % q"
                leaves: layout.state == "caps" ? ["U", "Z", "%", "Q", "0"] : ["u", "z", "%", "q", "0"];
                annotation: layout.state == "caps" ? "U0" : "u0";
            }
	     StringKey {
                label: layout.state == "caps" ? "{ ? }" : "<font size=\"5\">.at .de .org</font>";
                leaves: layout.state == "caps" ? [".", "{", "?", "}", ";"] :
                    [".", "<font size=\"6\">.at</font>", "<font size=\"6\">.de</font>", "<font size=\"6\">.org</font>","<font size=\"6\">.ch</font>"];
                unstyledLeaves: layout.state == "caps" ? [".", "{", "?", "}",";"] : [".", ".at", ".de", ".org",".ch"];
                annotation: layout.state == "caps" ? "." : ".ch"
        }
                         CommitKey    { id: enterKey; width: panel.keyWidth; height: layout.height;}
        }

    } // column
}
