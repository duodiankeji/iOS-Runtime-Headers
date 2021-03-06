/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAudioAnalyzer : NSObject <Endpointer> {
    struct OpaqueAudioComponentInstance { } * _audioUnitEPVAD2;
    double  _automaticEndpointingSuspensionEndTime;
    BOOL  _communicatedEndpointDetection;
    BOOL  _communicatedStartPointDetection;
    <AFAudioAnalyzerDelegate> * _delegate;
    BOOL  _detectedOneShotEndpoint;
    BOOL  _detectedOneShotStartpoint;
    BOOL  _detectedRecurrentEndpoint;
    BOOL  _detectedRecurrentStartpoint;
    double  _endWaitTime;
    int  _endpointMode;
    NSMutableData * _floatSampleBuffer;
    unsigned long  _frameRate;
    double  _interspeechWaitTime;
    BOOL  _isConfigured;
    double  _lastOneShotEndpoint;
    double  _lastOneShotStartpoint;
    double  _lastRecurrentEndpoint;
    double  _lastRecurrentStartpoint;
    double  _minimumDurationForEndpointer;
    NSString * _modelDictPath;
    double  _previousSamplesSeen;
    double  _sampleRate;
    double  _samplesSeen;
    BOOL  _saveSampleSeenInReset;
    double  _startWaitTime;
    int  _style;
    NSDictionary * _topLevelParameterDict;
}

@property (nonatomic) double automaticEndpointingSuspensionEndTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFAudioAnalyzerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property double endWaitTime;
@property int endpointMode;
@property (readonly) unsigned int hash;
@property double interspeechWaitTime;
@property (nonatomic, readonly) double lastEndOfVoiceActivityTime;
@property (nonatomic, readonly) double lastStartOfVoiceActivityTime;
@property (nonatomic) double minimumDurationForEndpointer;
@property double startWaitTime;
@property (nonatomic) int style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureWithSampleRate:(double)arg1 andFrameRate:(unsigned long)arg2;
- (void)_detectVoiceActivityInSamples:(float*)arg1 numSamples:(unsigned long)arg2;
- (double)automaticEndpointingSuspensionEndTime;
- (BOOL)configureWithASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 andFrameRate:(unsigned long)arg2;
- (void)dealloc;
- (id)delegate;
- (double)endWaitTime;
- (int)endpointMode;
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (id)init;
- (double)interspeechWaitTime;
- (double)lastEndOfVoiceActivityTime;
- (double)lastStartOfVoiceActivityTime;
- (double)minimumDurationForEndpointer;
- (void)preheat;
- (void)reset;
- (void)saveSamplesSeenOnNextReset;
- (void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointMode:(int)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setMinimumDurationForEndpointer:(double)arg1;
- (void)setStartWaitTime:(double)arg1;
- (void)setStyle:(int)arg1;
- (double)startWaitTime;
- (int)style;

@end
