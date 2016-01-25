#pragma once
// Composant3.h : main header file for the Composant2 DLL
//
#ifndef COMPOSANT3_H
#define COMPOSANT3_H
#define COMPOSANT3_VERSION 1,0,0,0
#define COMPOSANT3_VERSION_STR "1, 0, 0, 0"


#ifdef COMPOSANT3_EXPORTS
	#define COMPOSANT3_INTERFACE __declspec(dllexport)
#else
	#define COMPOSANT3_INTERFACE __declspec(dllimport)
#endif



// interface du composant2
COMPOSANT3_INTERFACE int composant3(int p1, int p2);
#endif
