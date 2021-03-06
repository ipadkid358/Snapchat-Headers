/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/TFFeatureProvider.h>
#import <Snapchat/TFModel.h>

@class NSString, NSSet, NSNumber, NSDictionary;

@interface SCAdsTFModel : NSObject <TFFeatureProvider, TFModel> {

	NSString* _modelId;
	NSSet* _inputFeatureNodeNames;
	NSString* _outputFeatureNodeName;
	NSNumber* _threshold;
	NSDictionary* _additionalFloatFeatures;
	NSDictionary* _additionalStringFeatures;
	GraphDef* _graph;
	unique_ptr<tensorflow::Session, std::__1::default_delete<tensorflow::Session> >* _session;
	NSNumber* _graphLoadingLatencyInMillis;
	NSNumber* _inferenceLatencyInMillis;
	NSString* _errorMessage;
	NSNumber* _probability;
	BOOL _isSessionCreated;
	BOOL _isReadyForInference;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getErrorMessage;
-(id)getModelId;
-(BOOL)loadModelAndCreateSession:(id)arg1 ;
-(BOOL)warmUpModel:(id)arg1 ;
-(Tensor*)createFloatArrayTensor:(id)arg1 ;
-(Tensor*)createFloatTensor:(float)arg1 ;
-(Tensor*)createStringTensor:(id)arg1 ;
-(Tensor*)createBooleanTensor:(BOOL)arg1 ;
-(Tensor*)getTensorForFeatureName:(id)arg1 fromFeatures:(id)arg2 ;
-(BOOL)loadModelToProto:(id)arg1 graph:(GraphDef*)arg2 ;
-(id)predictProbability:(id)arg1 isWarmUp:(BOOL)arg2 ;
-(id)getFeatureNames;
-(id)initWithTensorFlowModel:(id)arg1 warmUpFeatures:(id)arg2 ;
-(id)getThreshold;
-(id)getGraphLoadingLatencyInMillis;
-(id)getInferenceLatencyInMillis;
-(id)getProbability;
-(BOOL)isReadyForInference;
-(void)dealloc;
-(double)getCurrentTime;
-(void)log:(id)arg1 ;
-(BOOL)createSession;
@end

