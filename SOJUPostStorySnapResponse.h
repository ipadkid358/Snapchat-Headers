/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:55 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUPostStorySnapResponse.h>
@class SOJUServerInfoResponse, SOJUJsonStoryResponse, NSArray;


@protocol SOJUPostStorySnapResponse <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) SOJUServerInfoResponse * serverInfo; 
@property (nonatomic,copy,readonly) SOJUJsonStoryResponse * json; 
@property (nonatomic,copy,readonly) NSArray * groupStories; 
@property (nonatomic,copy,readonly) NSArray * verifiedStories; 
@property (nonatomic,copy,readonly) NSArray * verifiedStoriesWithCollabs; 
@property (nonatomic,copy,readonly) NSArray * myMobStories; 
@required
-(SOJUJsonStoryResponse *)json;
-(NSArray *)groupStories;
-(NSArray *)verifiedStories;
-(NSArray *)verifiedStoriesWithCollabs;
-(NSArray *)myMobStories;
-(SOJUServerInfoResponse *)serverInfo;

@end


@class SOJUServerInfoResponse, SOJUJsonStoryResponse, NSArray, NSString;

@interface SOJUPostStorySnapResponse : NSObject <SOJUPostStorySnapResponse> {

	SOJUServerInfoResponse* _serverInfo;
	SOJUJsonStoryResponse* _json;
	NSArray* _groupStories;
	NSArray* _verifiedStories;
	NSArray* _verifiedStoriesWithCollabs;
	NSArray* _myMobStories;

}

@property (nonatomic,copy,readonly) SOJUServerInfoResponse * serverInfo;               //@synthesize serverInfo=_serverInfo - In the implementation block
@property (nonatomic,copy,readonly) SOJUJsonStoryResponse * json;                      //@synthesize json=_json - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupStories;                            //@synthesize groupStories=_groupStories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * verifiedStories;                         //@synthesize verifiedStories=_verifiedStories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * verifiedStoriesWithCollabs;              //@synthesize verifiedStoriesWithCollabs=_verifiedStoriesWithCollabs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * myMobStories;                            //@synthesize myMobStories=_myMobStories - In the implementation block
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
-(SOJUJsonStoryResponse *)json;
-(id)toJson;
-(NSArray *)groupStories;
-(NSArray *)verifiedStories;
-(NSArray *)verifiedStoriesWithCollabs;
-(NSArray *)myMobStories;
-(id)initWithServerInfo:(id)arg1 json:(id)arg2 groupStories:(id)arg3 verifiedStories:(id)arg4 verifiedStoriesWithCollabs:(id)arg5 myMobStories:(id)arg6 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SOJUServerInfoResponse *)serverInfo;
-(id)toDictionary;
@end
