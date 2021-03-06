/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCChatMetricsEventInfo.h>
@class NSArray, NSNumber, NSDate, NSString;


@protocol SCChatMetricsEventInfo <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSArray * mischiefIds; 
@property (nonatomic,copy,readonly) NSNumber * userPresentCount; 
@property (nonatomic,copy,readonly) NSNumber * recipientCount; 
@property (nonatomic,copy,readonly) NSArray * recipientUsernames; 
@property (nonatomic,copy,readonly) NSDate * releaseTimestamp; 
@property (nonatomic,copy,readonly) NSString * sourceStickerPack; 
@property (nonatomic,readonly) long long sourceDrawerPosition; 
@property (nonatomic,readonly) long long sourceDrawerViewMode; 
@property (nonatomic,copy,readonly) NSNumber * durationInSeconds; 
@property (nonatomic,readonly) id snapCommonLoggingParameters; 
@property (nonatomic,readonly) long long chatSource; 
@property (nonatomic,readonly) long long mediaDrawerTab; 
@property (nonatomic,readonly) long long stickerSource; 
@property (nonatomic,readonly) BOOL isForwarded; 
@required
-(NSNumber *)userPresentCount;
-(long long)chatSource;
-(long long)mediaDrawerTab;
-(NSArray *)mischiefIds;
-(NSArray *)recipientUsernames;
-(NSDate *)releaseTimestamp;
-(NSString *)sourceStickerPack;
-(long long)sourceDrawerPosition;
-(long long)sourceDrawerViewMode;
-(id)snapCommonLoggingParameters;
-(long long)stickerSource;
-(NSNumber *)durationInSeconds;
-(NSNumber *)recipientCount;
-(BOOL)isForwarded;

@end


@class NSArray, NSNumber, NSDate, NSString;

@interface SCChatMetricsEventInfo : NSObject <SCChatMetricsEventInfo> {

	BOOL _isForwarded;
	NSArray* _mischiefIds;
	NSNumber* _userPresentCount;
	NSNumber* _recipientCount;
	NSArray* _recipientUsernames;
	NSDate* _releaseTimestamp;
	NSString* _sourceStickerPack;
	long long _sourceDrawerPosition;
	long long _sourceDrawerViewMode;
	NSNumber* _durationInSeconds;
	id _snapCommonLoggingParameters;
	long long _chatSource;
	long long _mediaDrawerTab;
	long long _stickerSource;

}

@property (nonatomic,copy,readonly) NSArray * mischiefIds;                     //@synthesize mischiefIds=_mischiefIds - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * userPresentCount;               //@synthesize userPresentCount=_userPresentCount - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * recipientCount;                 //@synthesize recipientCount=_recipientCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipientUsernames;              //@synthesize recipientUsernames=_recipientUsernames - In the implementation block
@property (nonatomic,copy,readonly) NSDate * releaseTimestamp;                 //@synthesize releaseTimestamp=_releaseTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceStickerPack;              //@synthesize sourceStickerPack=_sourceStickerPack - In the implementation block
@property (nonatomic,readonly) long long sourceDrawerPosition;                 //@synthesize sourceDrawerPosition=_sourceDrawerPosition - In the implementation block
@property (nonatomic,readonly) long long sourceDrawerViewMode;                 //@synthesize sourceDrawerViewMode=_sourceDrawerViewMode - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * durationInSeconds;              //@synthesize durationInSeconds=_durationInSeconds - In the implementation block
@property (nonatomic,readonly) id snapCommonLoggingParameters;                 //@synthesize snapCommonLoggingParameters=_snapCommonLoggingParameters - In the implementation block
@property (nonatomic,readonly) long long chatSource;                           //@synthesize chatSource=_chatSource - In the implementation block
@property (nonatomic,readonly) long long mediaDrawerTab;                       //@synthesize mediaDrawerTab=_mediaDrawerTab - In the implementation block
@property (nonatomic,readonly) long long stickerSource;                        //@synthesize stickerSource=_stickerSource - In the implementation block
@property (nonatomic,readonly) BOOL isForwarded;                               //@synthesize isForwarded=_isForwarded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setBool:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSNumber *)userPresentCount;
-(long long)chatSource;
-(long long)mediaDrawerTab;
-(NSArray *)mischiefIds;
-(NSArray *)recipientUsernames;
-(NSDate *)releaseTimestamp;
-(NSString *)sourceStickerPack;
-(long long)sourceDrawerPosition;
-(long long)sourceDrawerViewMode;
-(id)snapCommonLoggingParameters;
-(long long)stickerSource;
-(id)initWithMischiefIds:(id)arg1 userPresentCount:(id)arg2 recipientCount:(id)arg3 recipientUsernames:(id)arg4 releaseTimestamp:(id)arg5 sourceStickerPack:(id)arg6 sourceDrawerPosition:(long long)arg7 sourceDrawerViewMode:(long long)arg8 durationInSeconds:(id)arg9 snapCommonLoggingParameters:(id)arg10 chatSource:(long long)arg11 mediaDrawerTab:(long long)arg12 stickerSource:(long long)arg13 isForwarded:(BOOL)arg14 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)durationInSeconds;
-(NSNumber *)recipientCount;
-(BOOL)isForwarded;
@end

