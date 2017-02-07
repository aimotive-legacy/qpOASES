/*
 *	This file is part of qpOASES.
 *
 *	qpOASES -- An Implementation of the Online Active Set Strategy.
 *	Copyright (C) 2007-2015 by Hans Joachim Ferreau, Andreas Potschka,
 *	Christian Kirches et al. All rights reserved.
 *
 *	qpOASES is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU Lesser General Public
 *	License as published by the Free Software Foundation; either
 *	version 2.1 of the License, or (at your option) any later version.
 *
 *	qpOASES is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *	See the GNU Lesser General Public License for more details.
 *
 *	You should have received a copy of the GNU Lesser General Public
 *	License along with qpOASES; if not, write to the Free Software
 *	Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */


/**
 *	\file src/QProblemQore.cpp
 *	\author Christian Hoffmann
 *	\date 2016-2017
 *
 *	Implementation of the QProblemQore class, a QProblem-compatible wrapper 
 *	around the QORE QP solver.
 */


#include <qpOASES/QProblemQore.hpp>


BEGIN_NAMESPACE_QPOASES

QProblemQore::QProblemQore(	int_t _nV, int_t _nC )
{
	// TODO
}


/** Destructor. */
QProblemQore::~QProblemQore( ) 
{
	// TODO 
}


returnValue 
QProblemQore::setOptions( const Options & _options )
{
	// TODO
	return SUCCESSFUL_RETURN;
}


returnValue 
QProblemQore::printOptions( ) const
{
	// TODO
	return SUCCESSFUL_RETURN;
}	


returnValue 
QProblemQore::init(	const real_t* const _H,
					const real_t* const _g,
					const real_t* const _A,
					const real_t* const _lb,
					const real_t* const _ub,
					const real_t* const _lbA,
					const real_t* const _ubA,
					int_t& nWSR
					)
{
	// TODO
	return SUCCESSFUL_RETURN;
}	


returnValue 
QProblemQore::getPrimalSolution( real_t* const xOpt ) const
{
	// TODO
	return SUCCESSFUL_RETURN;
}	


returnValue 
QProblemQore::getDualSolution( real_t* const yOpt ) const
{
	// TODO
	return SUCCESSFUL_RETURN;
}	


real_t 
QProblemQore::getObjVal( ) const
{
	// TODO
	return 42;
}	


END_NAMESPACE_QPOASES


/*
 *	end of file
 */
