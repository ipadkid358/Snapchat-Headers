/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCustomStickerDeletion.h>
@class NSString;


@protocol SCCustomStickerDeletion <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * objectID; 
@property (nonatomic,readonly) int numSyncFailed; 
@property (nonatomic,copy,readonly) NSString * stickerId; 
@required
-(NSString *)stickerId;
-(int)numSyncFailed;
-(NSString *)objectID;

@end


@class NSString;

@interface SCCustomStickerDeletion : NSObject <SCCustomStickerDeletion> {

	int _numSyncFailed;
	NSString* _objectID;
	NSString* _stickerId;

}

@property (nonatomic,copy,readonly) NSString * objectID;               //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) int numSyncFailed;                      //@synthesize numSyncFailed=_numSyncFailed - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerId;              //@synthesize stickerId=_stickerId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(id)observe:(id)arg1 queue:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
+(id)parseManagedObject:(id)arg1 ;
+(id)fetchCustomStickerDeletionsWithOptions:(id)arg1 ;
+(id)fetchCustomStickerDeletionWithStickerId:(id)arg1 ;
+(unsigned long long)countOfCustomStickerDeletionsWithOptions:(id)arg1 ;
+(id)fetchCustomStickerDeletionsForOwner:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(unsigned long long)countOfCustomStickerDeletionsForOwner:(id)arg1 options:(id)arg2 ;
+(id)customStickerDeletionWithNumSyncFailed:(int)arg1 stickerId:(id)arg2 ;
+(id)allKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSString *)stickerId;
-(int)numSyncFailed;
-(id)initWithObjectID:(id)arg1 numSyncFailed:(int)arg2 stickerId:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)objectID;
@end

