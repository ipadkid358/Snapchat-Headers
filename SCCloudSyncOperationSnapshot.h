/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCloudSyncOperationSnapshot.h>
@class NSString, NSDate, NSData;


@protocol SCCloudSyncOperationSnapshot <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * objectID; 
@property (nonatomic,copy,readonly) NSDate * createTimeUtc; 
@property (nonatomic,copy,readonly) NSData * payload; 
@property (nonatomic,copy,readonly) NSString * requestID; 
@property (nonatomic,readonly) long long seqNum; 
@property (nonatomic,copy,readonly) NSString * targetEntryId; 
@required
-(NSDate *)createTimeUtc;
-(NSString *)targetEntryId;
-(NSData *)payload;
-(NSString *)objectID;
-(NSString *)requestID;
-(long long)seqNum;

@end


@class NSString, NSDate, NSData;

@interface SCCloudSyncOperationSnapshot : NSObject <SCCloudSyncOperationSnapshot> {

	NSString* _objectID;
	NSDate* _createTimeUtc;
	NSData* _payload;
	NSString* _requestID;
	long long _seqNum;
	NSString* _targetEntryId;

}

@property (nonatomic,copy,readonly) NSString * objectID;                   //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createTimeUtc;                //@synthesize createTimeUtc=_createTimeUtc - In the implementation block
@property (nonatomic,copy,readonly) NSData * payload;                      //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestID;                  //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) long long seqNum;                           //@synthesize seqNum=_seqNum - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetEntryId;              //@synthesize targetEntryId=_targetEntryId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(id)observe:(id)arg1 queue:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
+(id)parseManagedObject:(id)arg1 ;
+(id)fetchCloudSyncOperationSnapshotsForOwner:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)fetchCloudSyncOperationSnapshotsWithOptions:(id)arg1 ;
+(id)fetchFirstCloudSyncOperationSnapshotForOwner:(id)arg1 ;
+(id)fetchLatestCloudSyncOperationSnapshotForOwner:(id)arg1 ;
+(id)fetchCloudSyncOperationSnapshotsForOwner:(id)arg1 ;
+(id)fetchCloudSyncOperationSnapshotsForTargetEntryId:(id)arg1 ;
+(unsigned long long)countOfCloudSyncOperationSnapshotsWithOptions:(id)arg1 ;
+(unsigned long long)countOfCloudSyncOperationSnapshotsForOwner:(id)arg1 options:(id)arg2 ;
+(id)cloudSyncOperationSnapshotWithCreateTimeUtc:(id)arg1 payload:(id)arg2 requestID:(id)arg3 seqNum:(long long)arg4 targetEntryId:(id)arg5 ;
+(id)allKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSDate *)createTimeUtc;
-(NSString *)targetEntryId;
-(id)initWithObjectID:(id)arg1 createTimeUtc:(id)arg2 payload:(id)arg3 requestID:(id)arg4 seqNum:(long long)arg5 targetEntryId:(id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSData *)payload;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)objectID;
-(NSString *)requestID;
-(long long)seqNum;
@end
