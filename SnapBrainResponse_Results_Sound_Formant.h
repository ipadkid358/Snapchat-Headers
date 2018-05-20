/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:01 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SnapBrainResponse_Results_Sound_Note, NSMutableArray;

@interface SnapBrainResponse_Results_Sound_Formant : GPBMessage

@property (assign,nonatomic) float centroid; 
@property (assign,nonatomic) float f1; 
@property (assign,nonatomic) float f2; 
@property (assign,nonatomic) float f3; 
@property (assign,nonatomic) float f1DivF2; 
@property (assign,nonatomic) float f1DivF3; 
@property (assign,nonatomic) float f2SubF1; 
@property (assign,nonatomic) float f1F0DbDiff; 
@property (assign,nonatomic) float f2F0DbDiff; 
@property (assign,nonatomic) float f3F0DbDiff; 
@property (assign,nonatomic) float flatness; 
@property (assign,nonatomic) float fundamentalDb; 
@property (nonatomic,retain) SnapBrainResponse_Results_Sound_Note * fundamentalNote; 
@property (assign,nonatomic) BOOL hasFundamentalNote; 
@property (assign,nonatomic) float onsetDuration; 
@property (assign,nonatomic) float onsetEnd; 
@property (assign,nonatomic) float onsetStart; 
@property (nonatomic,retain) NSMutableArray * peaksArray; 
@property (nonatomic,readonly) unsigned long long peaksArray_Count; 
+(id)descriptor;
@end

