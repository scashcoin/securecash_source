// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
{1000,  "7a31a92938c4f2962de216bf1a6fb734d1db2c28b312c26b1d6175e2cb20efea"},
{2000,  "2326493a5f629c470fa6e264e86bf2e8bbb4401ac46d337e760e9e138faeca16"},
{3000,  "921f5d4ec2ebb7220a321920e4641814f5b5e82f87271873640306b4cd54f078"},
{4000,  "2141dcd2a05266da4e44fc1ce817a874abd2f83b1c28bcacbf324ee2d8673a7f"},
{5000,  "7f7ad736b6b91e326a2d02b664d110f3256c965929cfba16cc90c49740343229"},
{6000,  "9439eb63965ca72e78664396e99f82d2cd59f116d961c982ca48b015472f0270"},
{50000,  "90b26d80fe63079bc55c1cb5bc9da00389da8d7ac0013fa455df84e83c67c250"},
{100000,  "ca4545d4b788f296ca8f5abefe2a9632f85d1e0aa4c238b26ff6fae165b1b4f8"},
{150000,  "a1912fdd88bebd5d8cdbb41026829447d9452893fd60c09d983cb53b650b6159"},
{200000,  "b0be39531d1846c3d5faaa964ceee7d061bc6b9d1bcda216aebe70abbcdc2cc5"},
{225000,  "679a6d394b92ff8e053b0d5fdcb35f35c83c27010c2db49773a97f6e27f476fb"},
};
}
