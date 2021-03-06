#ifndef HFA3C29A9_9774_4221_8277_8F8D014884CB
#define HFA3C29A9_9774_4221_8277_8F8D014884CB

#include <domain/model/base/Entity.h>
#include <string>

struct AggregateRoot : Entity
{
	AggregateRoot(const std::string& id);

	bool operator==(const AggregateRoot* rhs);
	bool operator!=(const AggregateRoot* rhs);
	std::string getId() const;

private:
	std::string id;
};


#endif
