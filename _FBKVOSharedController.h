/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface _FBKVOSharedController : NSObject {

	NSHashTable* _infos;
	int _lock;

}
+(id)sharedController;
-(void)observe:(id)arg1 info:(id)arg2 ;
-(void)unobserve:(id)arg1 info:(id)arg2 ;
-(void)unobserve:(id)arg1 infos:(id)arg2 ;
-(id)init;
-(id)debugDescription;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

