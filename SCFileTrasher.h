/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface SCFileTrasher : NSObject {

	NSURL* _trashDirectory;

}
-(BOOL)moveDirectoryToTrash:(id)arg1 error:(id*)arg2 ;
-(void)clearTrashAsync:(/*^block*/id)arg1 ;
-(BOOL)moveFileToTrash:(id)arg1 error:(id*)arg2 ;
-(BOOL)_moveItemAtURL:(id)arg1 isDirectory:(BOOL)arg2 error:(id*)arg3 ;
-(id)_determineTrashDirectory;
@end

