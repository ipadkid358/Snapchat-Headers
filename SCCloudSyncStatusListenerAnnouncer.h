/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCloudSyncStatusListener.h>

@class NSString;

@interface SCCloudSyncStatusListenerAnnouncer : NSObject <SCCloudSyncStatusListener> {

	mutex _mutex;
	shared_ptr<std::__1::vector<__weak id<SCCloudSyncStatusListener>, std::__1::allocator<__weak id<SCCloudSyncStatusListener> > > >* _listeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cloudSync:(id)arg1 didChangeProgress:(float)arg2 ;
-(void)cloudSync:(id)arg1 didChangeEntrySyncStatus:(unsigned long long)arg2 entryId:(id)arg3 snapId:(id)arg4 ;
-(void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(BOOL)arg3 mayUpload:(BOOL)arg4 requiresUpgrade:(BOOL)arg5 ;
-(NSString *)description;
-(BOOL)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
