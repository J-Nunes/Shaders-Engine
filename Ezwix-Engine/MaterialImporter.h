#ifndef __MATERIAL_IMPORTER_H_
#define __MATERIAL_IMPORTER_H_

#include <string>
class ResourceFileTexture;

namespace MaterialImporter
{
	//File is the name of the final file. Path includes the file with it's extension.
	bool Import(const char* file, const char* path);
	bool Load(ResourceFileTexture * res);
	//Doesn't use ResourceManager
	int LoadSimpleFile(const char* name); 
}




#endif // !__MATERIAL_IMPORTER_H_
