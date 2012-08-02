// Copyright (c) 2011 Tel-Aviv University (Israel), INRIA Sophia-Antipolis (France).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org).
// You can redistribute it and/or modify it under the terms of the GNU
// General Public License as published by the Free Software Foundation,
// either version 3 of the License, or (at your option) any later version.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL: svn+ssh://scm.gforge.inria.fr/svn/cgal/branches/releases/CGAL-4.0-branch/Arrangement_on_surface_2/include/CGAL/Arr_rat_arc/Singleton.h $
// $Id: Singleton.h 67117 2012-01-13 18:14:48Z lrineau $
//
// Author(s)     : Oren Salzman <orenzalz@post.tau.ac.il >
//                 Michael Hemmer <Michael.Hemmer@sophia.inria.fr>



#ifndef SINGLETON_H_
#define SINGLETON_H_

namespace CGAL {
namespace Arr_rational_arc {
template <class T>
class Singleton
{
public:
  static T* instance() 
  {
    if(!m_pInstance) 
      m_pInstance = new T;
    assert(m_pInstance !=NULL);
    return m_pInstance;
  }
      
  static void DestroyInstance()
  {
    delete m_pInstance;
    m_pInstance = NULL;
  };
private:
  Singleton();          // ctor hidden
  ~Singleton();          // dtor hidden
private:
  static T* m_pInstance;
};

template <class T> T* Singleton<T>::m_pInstance=NULL;

}   // namespace Arr_rational_arc
}   //namespace CGAL { 
#endif // SINGLETON_H_
