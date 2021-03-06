/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCFeedItemViewModel.h>
@class NSArray, NSString;


@protocol SCFeedItemViewModel <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSArray * recentItems; 
@property (nonatomic,readonly) long long consumableFeedItemCount; 
@property (nonatomic,readonly) BOOL isFeedSyncedFromServer; 
@property (nonatomic,copy,readonly) NSString * feedId; 
@required
-(long long)consumableFeedItemCount;
-(BOOL)isFeedSyncedFromServer;
-(NSString *)feedId;
-(NSArray *)recentItems;

@end


@class NSArray, NSString;

@interface SCFeedItemViewModel : NSObject <SCFeedItemViewModel> {

	BOOL _isFeedSyncedFromServer;
	NSArray* _recentItems;
	long long _consumableFeedItemCount;
	NSString* _feedId;

}

@property (nonatomic,copy,readonly) NSArray * recentItems;                     //@synthesize recentItems=_recentItems - In the implementation block
@property (nonatomic,readonly) long long consumableFeedItemCount;              //@synthesize consumableFeedItemCount=_consumableFeedItemCount - In the implementation block
@property (nonatomic,readonly) BOOL isFeedSyncedFromServer;                    //@synthesize isFeedSyncedFromServer=_isFeedSyncedFromServer - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedId;                         //@synthesize feedId=_feedId - In the implementation block
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
-(void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(long long)consumableFeedItemCount;
-(BOOL)isFeedSyncedFromServer;
-(id)initWithRecentItems:(id)arg1 consumableFeedItemCount:(long long)arg2 isFeedSyncedFromServer:(BOOL)arg3 feedId:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)feedId;
-(NSArray *)recentItems;
@end

