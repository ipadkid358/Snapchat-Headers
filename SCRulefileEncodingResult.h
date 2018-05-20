/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDate;

@interface SCRulefileEncodingResult : NSObject {

	NSString* _encodingString;
	NSURL* _directStorageURL;
	NSString* _encodingErrorReason;
	NSString* _rulefileName;
	NSString* _rulefileVersionId;
	NSDate* _metaDataDownloadTime;
	long long _bandwithWhenDonwloadMetadata;

}

@property (nonatomic,copy) NSString * encodingString;                             //@synthesize encodingString=_encodingString - In the implementation block
@property (nonatomic,copy) NSURL * directStorageURL;                              //@synthesize directStorageURL=_directStorageURL - In the implementation block
@property (nonatomic,copy) NSString * encodingErrorReason;                        //@synthesize encodingErrorReason=_encodingErrorReason - In the implementation block
@property (nonatomic,copy) NSString * rulefileName;                               //@synthesize rulefileName=_rulefileName - In the implementation block
@property (nonatomic,copy) NSString * rulefileVersionId;                          //@synthesize rulefileVersionId=_rulefileVersionId - In the implementation block
@property (nonatomic,retain) NSDate * metaDataDownloadTime;                       //@synthesize metaDataDownloadTime=_metaDataDownloadTime - In the implementation block
@property (assign,nonatomic) long long bandwithWhenDonwloadMetadata;              //@synthesize bandwithWhenDonwloadMetadata=_bandwithWhenDonwloadMetadata - In the implementation block
-(void)setRulefileVersionId:(NSString *)arg1 ;
-(void)setRulefileName:(NSString *)arg1 ;
-(NSString *)rulefileVersionId;
-(NSString *)rulefileName;
-(NSString *)encodingString;
-(void)setEncodingString:(NSString *)arg1 ;
-(NSURL *)directStorageURL;
-(void)setDirectStorageURL:(NSURL *)arg1 ;
-(NSString *)encodingErrorReason;
-(void)setEncodingErrorReason:(NSString *)arg1 ;
-(NSDate *)metaDataDownloadTime;
-(void)setMetaDataDownloadTime:(NSDate *)arg1 ;
-(long long)bandwithWhenDonwloadMetadata;
-(void)setBandwithWhenDonwloadMetadata:(long long)arg1 ;
@end

