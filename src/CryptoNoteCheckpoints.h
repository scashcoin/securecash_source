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
{710974,  "23fb423a5dfa5c3d43ccaec208c34471614ca96687499c343a2954511d91f51c"},
{711000,  "3daa4a6f61464bb5ad477de94143e214b79c224d9e9ac28e0d30674b1f72d0bc"},
{711025,  "fb8c151aaa246fcc882f895b4c4a54c393d64fbee2a5252a51c3363e92aa95ef"},
{711030,  "13897353c05df386066e817c0a9c9f36b639e11d0ba7a3fc9d799992988fba27"},
{711055,  "d09599fab2989e1aa516d14ad0b35370d63350a78fb0f8c0789f75b8ae83cd46"},
{711125,  "51d1d965bd813742c9bb21a96cfe5b8e3d7d6f59c7d71b3ee2a66e36d56caea1"},
{711130,  "ffc24320119db9fd20e0bc1462976a16189971121c0c5097295fb0f0bf00bd33"},
};
}
