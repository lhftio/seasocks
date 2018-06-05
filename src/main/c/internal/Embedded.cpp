
#include "internal/Embedded.h"

#include <string>
#include <unordered_map>

namespace {


std::unordered_map<std::string, EmbeddedContent> embedded = {


};

}  // namespace

const EmbeddedContent* findEmbeddedContent(const std::string& name) {
	auto found = embedded.find(name);
	if (found == embedded.end()) {
		return nullptr;
	}
	return &found->second;
}

