/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCCloudSyncStatusListener <NSObject>
@optional
-(void)cloudSync:(id)arg1 didChangeProgress:(float)arg2;
-(void)cloudSync:(id)arg1 didChangeEntrySyncStatus:(unsigned long long)arg2 entryId:(id)arg3 snapId:(id)arg4;

@required
-(void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(BOOL)arg3 mayUpload:(BOOL)arg4 requiresUpgrade:(BOOL)arg5;

@end

