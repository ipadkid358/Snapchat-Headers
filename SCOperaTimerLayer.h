/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayer.h>

@class SCOperaPage, NSString;

@interface SCOperaTimerLayer : NSObject <SCOperaLayer> {

	BOOL _looping;
	BOOL _preventDecay;
	BOOL _floating;
	SCOperaPage* _page;
	unsigned long long _shape;
	double _duration;
	double _totalTimeLeft;
	double _totalDuration;
	double _mediaStartTime;
	long long _currentSegmentIndex;
	long long _numTotalSegments;

}

@property (assign,nonatomic,__weak) SCOperaPage * page;                    //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) unsigned long long shape;                   //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double totalTimeLeft;                       //@synthesize totalTimeLeft=_totalTimeLeft - In the implementation block
@property (nonatomic,readonly) double totalDuration;                       //@synthesize totalDuration=_totalDuration - In the implementation block
@property (nonatomic,readonly) double mediaStartTime;                      //@synthesize mediaStartTime=_mediaStartTime - In the implementation block
@property (nonatomic,readonly) long long currentSegmentIndex;              //@synthesize currentSegmentIndex=_currentSegmentIndex - In the implementation block
@property (nonatomic,readonly) long long numTotalSegments;                 //@synthesize numTotalSegments=_numTotalSegments - In the implementation block
@property (nonatomic,readonly) BOOL looping;                               //@synthesize looping=_looping - In the implementation block
@property (nonatomic,readonly) BOOL preventDecay;                          //@synthesize preventDecay=_preventDecay - In the implementation block
@property (nonatomic,readonly) BOOL floating;                              //@synthesize floating=_floating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerWithProperties:(id)arg1 page:(id)arg2 ;
-(id)initWithProperties:(id)arg1 page:(id)arg2 ;
-(double)mediaStartTime;
-(double)totalTimeLeft;
-(BOOL)preventDecay;
-(long long)currentSegmentIndex;
-(long long)numTotalSegments;
-(BOOL)looping;
-(BOOL)isEqual:(id)arg1 ;
-(double)duration;
-(unsigned long long)type;
-(unsigned long long)shape;
-(BOOL)floating;
-(SCOperaPage *)page;
-(void)setPage:(SCOperaPage *)arg1 ;
-(double)totalDuration;
@end
