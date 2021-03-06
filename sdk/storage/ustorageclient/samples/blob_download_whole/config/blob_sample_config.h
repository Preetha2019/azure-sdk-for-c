// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef BLOB_SAMPLE_CONFIG_H
#define BLOB_SAMPLE_CONFIG_H

#define AZSTORAGE_CONFIG_SAMPLE_NAME                        "blob_download_whole"
#define AZSTORAGE_CONFIG_ACCOUNT_HOST_NAME                  "<your storage account name here>.blob.core.windows.net"
#define AZSTORAGE_CONFIG_PORT                               80
                                                            // ex: "/mycontainer/moon_landing.jpg?sv=1969-07-20&ss=bfqt&srt=sco&sp=rwdlacup&se=1969-07-16T14:32:00Z&st=1969-07-24T17:49:00Z&spr=https&sig=m%2L9ZBiyT1FNYhYdmt8Erd6%2FUUgMuJGzcQX2VK45ZBek%3D"
#define AZSTORAGE_CONFIG_DOWNLOAD_BLOB_PATH_WITH_SAS        "<your blob path here><your storage account sas token here>"

#endif
