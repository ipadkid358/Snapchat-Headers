/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSData;

@interface SCCloudSyncOperationSnapshotBuilder : NSObject {

	NSString* _objectID;
	NSDate* _createTimeUtc;
	NSData* _payload;
	NSString* _requestID;
	long long _seqNum;
	NSString* _targetEntryId;

}
+(id)withCloudSyncOperationSnapshot:(id)arg1 ;
-(id)setTargetEntryId:(id)arg1 ;
-(id)setCreateTimeUtc:(id)arg1 ;
-(id)setPayload:(id)arg1 ;
-(id)build;
-(id)setSeqNum:(long long)arg1 ;
-(id)setObjectID:(id)arg1 ;
-(id)setRequestID:(id)arg1 ;
@end

