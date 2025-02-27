/* Copyright 2015-2021 Alexander Grund
 *
 * This file is part of PMacc.
 *
 * PMacc is free software: you can redistribute it and/or modify
 * it under the terms of either the GNU General Public License or
 * the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PMacc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License and the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License
 * and the GNU Lesser General Public License along with PMacc.
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "pmacc/types.hpp"

namespace pmacc
{
    namespace random
    {
        /**
         * Wrapper class for a state of a random number generator
         * Can be used for aligned storing of states
         */
        template<class T_RNGMethod>
        class RNGState
        {
        public:
            using RNGMethod = T_RNGMethod;
            using StateType = typename RNGMethod::StateType;

            HDINLINE RNGState() = default;

            HDINLINE RNGState(const StateType& other) : state(other)
            {
            }

            HDINLINE StateType& getState()
            {
                return state;
            }

        private:
            PMACC_ALIGN8(StateType, ) state;
        };

    } // namespace random
} // namespace pmacc
