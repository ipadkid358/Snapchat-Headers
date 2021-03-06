/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUIdentitySuggestedFriendDeprecated.h>
@class NSString, NSDictionary, NSNumber;


@protocol SOJUIdentitySuggestedFriendDeprecated <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * suggestReason; 
@property (nonatomic,copy,readonly) NSDictionary * score; 
@property (nonatomic,copy,readonly) NSString * suggestReasonDisplay; 
@property (nonatomic,copy,readonly) NSString * display; 
@property (nonatomic,copy,readonly) NSNumber * isHidden; 
@property (nonatomic,copy,readonly) NSString * storyPrivacy; 
@property (nonatomic,copy,readonly) NSNumber * isNewSnapchatter; 
@required
-(NSString *)idValue;
-(NSString *)storyPrivacy;
-(NSString *)suggestReason;
-(NSString *)suggestReasonDisplay;
-(NSNumber *)isNewSnapchatter;
-(NSNumber *)isHidden;
-(NSString *)name;
-(NSString *)display;
-(NSDictionary *)score;

@end


@class NSString, NSDictionary, NSNumber;

@interface SOJUIdentitySuggestedFriendDeprecated : NSObject <SOJUIdentitySuggestedFriendDeprecated> {

	NSString* _idValue;
	NSString* _name;
	NSString* _suggestReason;
	NSDictionary* _score;
	NSString* _suggestReasonDisplay;
	NSString* _display;
	NSNumber* _isHidden;
	NSString* _storyPrivacy;
	NSNumber* _isNewSnapchatter;

}

@property (nonatomic,copy,readonly) NSString * idValue;                           //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestReason;                     //@synthesize suggestReason=_suggestReason - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * score;                         //@synthesize score=_score - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestReasonDisplay;              //@synthesize suggestReasonDisplay=_suggestReasonDisplay - In the implementation block
@property (nonatomic,copy,readonly) NSString * display;                           //@synthesize display=_display - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isHidden;                          //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyPrivacy;                      //@synthesize storyPrivacy=_storyPrivacy - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isNewSnapchatter;                  //@synthesize isNewSnapchatter=_isNewSnapchatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(NSString *)idValue;
-(NSString *)storyPrivacy;
-(BOOL)isHiddenValue;
-(BOOL)isNewSnapchatterValue;
-(NSString *)suggestReason;
-(NSString *)suggestReasonDisplay;
-(NSNumber *)isNewSnapchatter;
-(id)initWithIdValue:(id)arg1 name:(id)arg2 suggestReason:(id)arg3 score:(id)arg4 suggestReasonDisplay:(id)arg5 display:(id)arg6 isHidden:(id)arg7 storyPrivacy:(id)arg8 isNewSnapchatter:(id)arg9 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)isHidden;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(NSString *)display;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(NSDictionary *)score;
@end

