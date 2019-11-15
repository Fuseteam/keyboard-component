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

    anchors.fill: parent;
    content: c1 

    Column {
        id: c1
        anchors.fill: parent;
	property int keyHeight: panel.keyHeight-panel.keyHeight*0.1;
	spacing: 0

        Row {
            anchors.horizontalCenter: parent.horizontalCenter;
            spacing: 0
	    ActionKey { id: composekey; width: panel.keyWidth; visHeight:layout.height;height:layout.height;} 
	    FlickCharKey {
                charlabel: layout.state == "caps" ? ["E", "L", ":", "P", "1"] : ["e", "l", ":", "p", "1"];
                leaves: layout.state == "caps" ? ["E", "L", ":", "P", "1"] : ["e", "l", ":", "p", "1"];
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? ["N", "G", "$", "V", "2"] : ["n", "g", "$", "v", "2"];
                leaves: layout.state == "caps" ? ["N", "G", "$", "V", "2"] : ["n", "g", "$", "v", "2"];
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? ["I", "M", "#", "Ü", "3"] : ["i", "m", "#", "ü", "3"];
                leaves: layout.state == "caps" ? ["I", "M", "#", "Ü", "3"] : ["i", "m", "#", "ü", "3"];
            }
            CaseSwitchKey { id: layout; labelright:true}
	}

        Row {
            anchors.horizontalCenter: parent.horizontalCenter;
            spacing: 0

            FlickCharKey {
                labelleft:true
		charlabel: layout.state == "caps" ? ["=", "", "`", "_", "|"] : ["=", "", "`", "_", "|"];
                leaves: layout.state == "caps" ? ["=", "", "`", "_", "|"] : ["=", "", "`", "_", "|"];
            }
	    FlickCharKey {
                charlabel: layout.state == "caps" ? ["R", "C", "'", "Ä", "4"] : ["r", "c", "'", "ä", "4"];
                leaves: layout.state == "caps" ? ["R", "C", "'", "Ä", "4"] : ["r", "c", "'", "ä", "4"];
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? ["T", "O", "^", "J", "5"] : ["t", "o", "^", "j", "5"];
                leaves: layout.state == "caps" ? ["T", "O", "^", "J", "5"] : ["t", "o", "^", "j", "5"];
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? ["S", "B", "\"", "Ö", "6"] : ["s", "b", "\"", "ö", "6"];
                leaves: layout.state == "caps" ? ["S", "B", "\"", "Ö", "6"] : ["s", "b", "\"", "ö", "6"];
            }
            FlickCharKey {
		labelright:true
                charlabel: layout.state == "caps" ? [";", "&amp;", "!", "", "~"] : [";", "&amp;", "!", "", "~"];
                leaves: layout.state == "caps" ? [";", "&", "!", "", "~"] : [";", "&", "!", "", "~"];
            }
	}

        Row {
            anchors.horizontalCenter: parent.horizontalCenter;
            spacing: 0
           
            CursorKey { leftSide:true}

	     FlickCharKey {
                charlabel: layout.state == "caps" ? ["A", "F", "\\", "ß", "7"] : ["a", "f", "\\", "ß", "7"];
                leaves: layout.state == "caps" ? ["A", "F", "\\", "ß", "7"] : ["a", "f", "\\", "ß", "7"];
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? ["D", "K", "*", "Y", "8"] : ["d", "k", "*", "y", "8"];
                leaves: layout.state == "caps" ? ["D", "K", "*", "Y", "8"] : ["d", "k", "*", "y", "8"];
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? ["H", "W", "/", "X", "9"] : ["h", "w", "/", "x", "9"];
                leaves: layout.state == "caps" ? ["H", "W", "/", "X", "9"] : ["h", "w", "/", "x", "9"];
            }
           CursorKey { rightSide:true; }

	 }

        Row {
            anchors.horizontalCenter: parent.horizontalCenter;
            spacing: 0

	LanguageKey {  width: panel.keyWidth; height:layout.height;visHeight:layout.height;}	 
            FlickCharKey {
   		 charlabel: layout.state == "caps" ?  [",", "&lt;", "-", ">", "+"]: [",", "(", "-", ")", "+"];
   		 leaves: layout.state == "caps" ?  [",", "<", "-", ">", "+"]: [",", "(", "-", ")", "+"];
	    }
	    FlickCharKey {
                charlabel: layout.state == "caps" ? ["U", "Z", "%", "Q", "0"] : ["u", "z", "%", "q", "0"];
                leaves: layout.state == "caps" ? ["U", "Z", "%", "Q", "0"] : ["u", "z", "%", "q", "0"];
            }
            FlickCharKey {
                charlabel: layout.state == "caps" ? [".", "{", "?", "}", "@"] : [".", "[", "?", "]", "@"];
                leaves: layout.state == "caps" ? [".", "{", "?", "}", "@"] : [".", "[", "?", "]", "@"];
            }
            BackspaceKey { rightSide: true; width: panel.keyWidth;visHeight:layout.height;height:layout.height;}
	} 
   } // column
     Row{
	 anchors.horizontalCenter: parent.horizontalCenter;
	 anchors.left:parent.left
	 anchors.bottom:parent.bottom
	 spacing: 0
	
	SpaceKey{
		id: spaceKey
		width:parent.width//nel.keyWidth*3
		height:layout.height-layout.height*0.5
		visHeight:spaceKey.height
		fontSize:spaceKey.height

	}
     }
}
