// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// see the license for the specific language governing permissions and
// limitations under the license.
#include "internal/cxx/load/common/thread_pool_factory.h"

#include "absl/memory/memory.h"

namespace mako {
namespace internal {

std::unique_ptr<ThreadPool> CreateThreadPool(int num_threads) {
  return absl::make_unique<ThreadPool>(
      num_threads);
}

}  // namespace internal
}  // namespace mako
