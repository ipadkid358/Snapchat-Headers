/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:06 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCFilterBase <NSObject>
@property (nonatomic,readonly) double filteredValue; 
@property (nonatomic,readonly) unsigned long long sampleCount; 
@property (nonatomic,readonly) double filterCoefficient; 
@property (nonatomic,readonly) BOOL includeInitialValueInFiltering; 
@property (nonatomic,readonly) BOOL isUnderestimate; 
@required
-(double)filteredValue;
-(BOOL)includeInitialValueInFiltering;
-(id)initWithFilterCoefficient:(double)arg1 initialValue:(double)arg2 includeInitialValueInFiltering:(BOOL)arg3;
-(void)performFilteringWithNewSample:(double)arg1;
-(void)filterAnalyticsDictionaryWithCompletion:(/*^block*/id)arg1;
-(BOOL)isUnderestimate;
-(unsigned long long)sampleCount;
-(void)reset;
-(double)filterCoefficient;

@end

