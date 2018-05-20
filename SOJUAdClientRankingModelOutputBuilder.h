/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface SOJUAdClientRankingModelOutputBuilder : NSObject {

	NSString* _modelId;
	NSNumber* _score;
	NSNumber* _inferenceLatency;
	NSNumber* _loadingLatency;
	NSString* _error;

}
+(id)withJUAdClientRankingModelOutput:(id)arg1 ;
-(id)setScoreValue:(float)arg1 ;
-(id)setInferenceLatencyValue:(long long)arg1 ;
-(id)setLoadingLatencyValue:(long long)arg1 ;
-(id)setModelId:(id)arg1 ;
-(id)setInferenceLatency:(id)arg1 ;
-(id)setLoadingLatency:(id)arg1 ;
-(id)build;
-(id)setScore:(id)arg1 ;
-(id)setError:(id)arg1 ;
@end

